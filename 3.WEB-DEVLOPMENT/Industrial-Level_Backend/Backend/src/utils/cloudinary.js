import {v2 as cloudinary} from 'cloudinary';
import dotenv from 'dotenv';
import fs from 'fs';
dotenv.config();
(async function() {

    // Configuration
    cloudinary.config({ 
        cloud_name: process.env.CLOUDINARY_CLOUD_NAME, 
        api_key: process.env.CLOUDINARY_API_KEY, 
        api_secret: process.env.CLOUDINARY_API_SECRET, 
    });
    
    const uploadOnCloudinary = async (localFilePath) => {
        try{
            if(!localFilePath) return null
            // Check if the file exists
            if (!fs.existsSync(localFilePath)) {
                console.error(`File not found: ${localFilePath}`);
                return null;
            }
            // Upload the file to Cloudinary
            const response = await cloudinary.uploader.upload(localFilePath, {
                public_id: localFilePath.split('/').pop().split('.')[0], // Use the file name as public_id
                overwrite: true, // Overwrite if the file already exists
                resource_type: 'auto', // Automatically determine the resource type (image, video, etc.)
            });
            console.log('Upload successful:', response.url);
            return response; // Return the URL of the uploaded file

        }
        catch (error) {
            fs.unlinkSync(localFilePath); // Delete the file if upload fails
            console.error('Upload failed:', error.message);
            return null;
        }

    }
    
    console.log(response);
})();