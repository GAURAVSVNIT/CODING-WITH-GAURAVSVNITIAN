import dotenv from 'dotenv';
import connectDB from './db/index.js';

dotenv.config({
    path: './.env'
});

// Call the connectDB function to connect to the database
connectDB();