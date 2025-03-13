import express from 'express';
import logger from "./logger.js";
import morgan from "morgan";

const app = express();
const PORT = 3000;

const morganFormat = ":method :url :status :response-time ms";

app.use(
    morgan(morganFormat, {
      stream: {
        //Regex to get the method, url, status, and response time from the message
        write: (message) => {
          const logObject = {
            method: message.split(" ")[0],// Splitting the message by space and getting the first element GET, POST, PUT, DELETE Like the Same Usage of Regex in python
            url: message.split(" ")[1], 
            status: message.split(" ")[2],
            responseTime: message.split(" ")[3],
          };
          //Logging the logObject
          logger.info(JSON.stringify(logObject));
        },
      },
    })
  );

app.use(express.json());

let teaData = [];
let nextId = 1;

app.post('/tea', (req, res) => {
    logger.info("POST request to /tea");
    const { name, price } = req.body;
    const newTea = {
        id: nextId++,
        name,
        price
    };
    teaData.push(newTea);
    res.status(201).send(newTea);
});

app.get('/teas', (req, res) => {
    logger.info("GET request to /teas");
    res.status(200).send(teaData);
});

app.get('/tea/:id', (req, res) => {
    logger.info("GET request to /tea/:id");
    logger.info("GET request to /tea/:id");
    const tea = teaData.find(tea => tea.id === parseInt(req.params.id));
    if (!tea) {
        res.status(404).send('The tea with the given ID was not found');
        return;
    }
    res.status(200).send(tea);
});

app.put('/tea/:id', (req, res) => {
    logger.info("PUT request to /tea/:id");
    const teaIndex = teaData.findIndex(tea => tea.id === parseInt(req.params.id));
    if (teaIndex === -1) {
        return res.status(404).send('The tea with the given ID was not found');
    }
    const { name, price } = req.body;
    teaData[teaIndex].name = name;
    teaData[teaIndex].price = price;
    res.status(200).send(teaData[teaIndex]);
});

app.delete('/tea/:id', (req, res) => {
    logger.warn("DELETE request to /tea/:id");
    const teaIndex = teaData.findIndex(tea => tea.id === parseInt(req.params.id));
    if (teaIndex === -1) {
        res.status(404).send('The tea with the given ID was not found');
        return;
    }
    teaData.splice(teaIndex, 1);
    res.status(200).send("deletedTea");
});

app.listen(PORT, () => {
    console.log(`Server is running on PORT ${PORT}`);
});