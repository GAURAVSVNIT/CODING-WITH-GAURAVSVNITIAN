import mongoose from 'mongoose';
import { DB_NAME } from './constants.js';



// Log the MongoDB URI for debugging

const connectDB = async () => {
    try {
        mongoose.set('strictQuery', false); // Set strictQuery to false to avoid deprecation warning
        mongoose.set('debug', true); // Enable Mongoose debug mode for detailed logging 
        const uri = process.env.MONGODB_URI;  
        console.log(`MongoDB URI: ${uri}`); // Log the MongoDB URI for debugging
        
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