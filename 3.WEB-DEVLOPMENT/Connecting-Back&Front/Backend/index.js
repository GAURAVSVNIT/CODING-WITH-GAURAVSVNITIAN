import express from 'express';

const app = express();

app.get('/', (req, res) => {
    res.send('Hello World');
});

const port = process.env.PORT || 3000;

app.listen(port, () => {
    console.log(`Server is running on port http://localhost:${port}`);
});
app.get('/jokes', (req, res) => {
   const jokes = [
         {
            id: 1,
            question: 'What do you call a very small valentine?',
            answer: 'A valen-tiny!',
            },
            {
            id: 2,
            question: 'What did the dog say when he rubbed his tail on the sandpaper?',
            answer: 'Ruff, Ruff!',
            },
            {
            id: 3,
            question: 'Why don’t sharks like to eat clowns?',
            answer: 'Because they taste funny!',
            },];
    res.send(jokes);
});
