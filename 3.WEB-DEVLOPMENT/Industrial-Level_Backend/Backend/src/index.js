import dotenv from 'dotenv';
import connectDB from './db/index.js';

dotenv.config({
    path: './.env'
});

// Call the connectDB function to connect to the database
connectDB()
    .then(() => {

        console.log('Connected to the database');
        app.listen(process.env.PORT || 8000, () => {
            console.log(`Server is running on port ${process.env.PORT}`);
        });
    }
    )
    .catch((error) => {
        console.log('Error connecting to the database', error);
    });