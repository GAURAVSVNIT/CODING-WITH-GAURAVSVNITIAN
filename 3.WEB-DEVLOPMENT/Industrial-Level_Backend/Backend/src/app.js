// import express from 'express';
// import cors from 'cors';
// const app = express();

// app.use(cors(
//     {
//         origin: process.env.CORS_ORIGIN,
//         credentials: true
//     }
// ));

// // Middleware are functions that have access to the request object (req), the response object (res), and the next function in the application’s request-response cycle.
// // Middleware functions can perform the following tasks:    
// // Execute any code.
// // Make changes to the request and the response objects.
// app.use(express.json({ limit: '16kb' }));
// app.use(express.urlencoded({ extended: true, limit: '16kb' }));
// app.use(express.static('public'));


// //importing the routes
// import healthcheckRouter from './routes/healthcheck.routes.js';

// //routes

// app.use('/api/v1/healthcheck', healthcheckRouter);

// export { app };

import express from 'express';
import cors from 'cors';
import healthcheckRouter from './routes/healthcheck.routes.js'; // Ensure the correct file extension
import cookieParser from 'cookie-parser';
const app = express();

app.use(cors({
    origin: process.env.CORS_ORIGIN,
    credentials: true
}));


// Middleware are functions that have access to the request object (req), the response object (res), and the next function in the application’s request-response cycle.
// Middleware functions can perform the following tasks:    
// Execute any code.
// Make changes to the request and the response objects.
app.use(express.json({ limit: '16kb' }));
app.use(express.urlencoded({ extended: true, limit: '16kb' }));
app.use(express.static('public'));
app.use(cookieParser());

// Routes
app.use('/api/v1/healthcheck', healthcheckRouter);


//routes import
import userRouter from './routes/user.routes.js'; // Ensure the correct file extension

//routers
app.use('/api/v1/users', userRouter);
export { app };