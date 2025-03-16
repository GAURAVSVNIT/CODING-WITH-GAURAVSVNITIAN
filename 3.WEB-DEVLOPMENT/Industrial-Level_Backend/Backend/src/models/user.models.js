import mongoose, { Schema } from 'mongoose';
import bcrypt from 'bcrypt';
import jwt from 'jsonwebtoken';

const userSchema = new Schema({
    username: {
        type: String,
        required: true,
        unique: true,
        trim: true,
        minlength: 3,
        lowercase: true,
        index: true
    },
    email : {
        type: String,
        required: true,
        unique: true,
        trim: true,
        lowercase: true
    },
    fullname: {
        type: String,
        required: true,
        trim: true,
        minlength: 3,
        index: true
    },
    avatar: {
        type: String,
        default: 'https://res.cloudinary.com/dkkgmzpqd/image/upload/v1626821154/avatars/avatar-1_r6ek0w.png',
        required: true
    },
    coverImage: {
        type: String,
        default: 'https://res.cloudinary.com/dkkgmzpqd/image/upload/v1626821154/avatars/avatar-1_r6ek0w.png'
    },
    watchHistory:[
        {
            type: Schema.Types.ObjectId,
            ref: "Video"
        }
    ],
    password: {
        type: String,
        required: [true, 'Password is required'],
        trim: true,
        minlength: 6
    },
    refreshToken: {
        type: String
    },}, 
    {
    timestamps: true}
);

 userSchema.pre('save', async function(next) {
    if (this.isModified('password')) {
        this.password = await bcrypt.hash(this.password, 10);
    }
    next();
}
);

userSchema.methods.isPasswordCorrect = async function (password) {
    return await bcrypt.compare(password, this.password);
}

userSchema.methods.generateAccessToken = function() {
   //Short lived token
    return jwt.sign({ id: this._id,
        username: this.username,
        email: this.email,
     }, process.env.ACCESS_TOKEN_SECRET, { expiresIn: process.env.ACCESS_TOKEN_EXPIRY });
}

userSchema.methods.generateRefreshToken = function() {
    //Short lived token
     return jwt.sign({ id: this._id},
        process.env.REFRESH_TOKEN_SECRET, { expiresIn: process.env.REFRESH_TOKEN_EXPIRY });
 }

// Export the model to use it in other files
export const User = mongoose.model('User', userSchema);