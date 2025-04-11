import asyncHandler  from "../utils/asynchandler.js";


const registerUser = asyncHandler(async (req, res) => {
    // Logic for registering a user
    // get user data from request body
    // validation of user data
    // upload them to cloudinary 
    res.status(201).json({ message: "User registered successfully" });
}
);

export {registerUser};
