import { ApiResponse } from '../utils/ApiResponse.js'; // Ensure the correct file extension
import  asyncHandler  from '../utils/asynchandler.js'; // Ensure the correct file extension
// This is a simple health check controller that checks if the server is running or not

const healthCheck = asyncHandler(async (req, res) => {
    return res
    .status(200)
    .json(new ApiResponse(200, "OK", "Health Check is passed"));
});

export { healthCheck };