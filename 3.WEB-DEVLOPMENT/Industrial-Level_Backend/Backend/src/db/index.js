import mongoose from 'mongoose';
import { DB_NAME } from './constants.js';
import dotenv from 'dotenv';

dotenv.config({
    path: './src/.env',
});

const connectDB = async () => {
    try {
        const uri = process.env.MONGODB_URI;
        if (!uri) {
            throw new Error('MONGODB_URI is not defined in the environment variables');
        }
        const connectionInstance = await mongoose.connect(`${process.env.MONGODB_URI}/${DB_NAME}`, {
            useNewUrlParser: true,
            useUnifiedTopology: true,
        });
        console.log(`\n MongoDB connected ! DB host: ${connectionInstance.connection.host}`);

    } 
    catch (error) {
        console.error('MongoDB connection error:', error);
        process.exit(1);
    }
}

export default
connectDB;