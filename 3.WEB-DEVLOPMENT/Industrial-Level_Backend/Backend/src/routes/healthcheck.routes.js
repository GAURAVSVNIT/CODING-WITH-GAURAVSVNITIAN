// import { Router } from 'express';
// import {  healthCheck  } from './controllers/healthcheck.controllers';


// const router = Router();

// router.route('/').get(healthCheck);

// export default router;

import express from 'express';
import { healthCheck } from '../controllers/healthcheck.controller.js'; // Ensure the correct file extension

const router = express.Router();

router.get('/', healthCheck);

export default router;