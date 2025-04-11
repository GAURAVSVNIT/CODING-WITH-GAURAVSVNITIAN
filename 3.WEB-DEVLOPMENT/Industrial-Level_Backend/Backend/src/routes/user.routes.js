import { Router } from "express";
import  registerUser from "../controllers/user.controller.js"; // Ensure the correct file extension

const router = Router();

router.route('/register').post(registerUser);

export default router;
// import express from 'express';