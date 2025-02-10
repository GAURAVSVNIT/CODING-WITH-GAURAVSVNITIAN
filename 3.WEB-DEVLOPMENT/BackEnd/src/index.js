import dotenv from 'dotenv';
dotenv.config();

import mongoose from 'mongoose';

const connectDB = async () => {
    try {
        const connectionInstance = await mongoose.connect(process.env.MONGODB_URI, {
            useNewUrlParser: true,
            useUnifiedTopology: true
        });
        console.log(`MONGODB connection successful 
        || 
        DB HOST: ${connectionInstance.connection.host}`);
    } catch (error) {
        console.error('MONGODB connection error', error);
        process.exit(1);
    }
};

connectDB()
.then(() => {
    console.log('Connected to MongoDB');

    // Start the server
    app.listen(process.env.PORT || 3000, () => {
        console.log(`Server is running on PORT ${PORT}`);
    });
})
.catch((error) => {
    console.error('Error connecting to MongoDB', error);
});