// import dotenv from 'dotenv';
// import { app } from './app.js'; // Ensure the correct file extension
// import connectDB from './db/index.js';


// dotenv.config({
//     path: './.env',
// });
// const PORT = process.env.PORT || 8000;

// connectDB()
// .then(
//     () => {
//         app.listen(PORT, () => {
//             console.log(`Server is running on port ${PORT}`);
//         });
//     }
// )
// .catch((err) => console.error("Error in connecting to the database", err));

import dotenv from 'dotenv';
import { app } from './app.js'; // Ensure the correct file extension
import connectDB from './db/index.js';

dotenv.config({
    path: './.env',
});

const PORT = process.env.PORT || 8000;

connectDB()
.then(
    () => {
        app.listen(PORT, () => {
            console.log(`Server is running on port ${PORT}`);
        });
    }
)
.catch((err) => console.error("Error in connecting to the database", err));