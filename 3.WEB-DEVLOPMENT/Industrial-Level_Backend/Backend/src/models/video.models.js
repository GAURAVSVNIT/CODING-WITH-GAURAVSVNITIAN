import mongoose, { Schema } from "mongoose";
import mongooseAggregatePaginate from "mongoose-aggregate-paginate-v2";

const videoSchema = new Schema({
    videoFile: {
        type: String,
        default: 'https://res.cloudinary.com/dkkgmzpqd/video/upload/v1626821154/avatars/avatar-1_r6ek0w.png',
        required: true  
    },
    thumbnail: {
        type: String,
        default: 'https://res.cloudinary.com/dkkgmzpqd/image/upload/v1626821154/avatars/avatar-1_r6ek0w.png',
        required: true
    },
    title: {
        type: String,
        required: true,
        trim: true,
        minlength: 3,
        index: true
    },
    description: {
        type: String,
        required: true,
        trim: true,
        minlength: 3
    },
    views: {
        type: Number,
        default: 0
    },
    duration: {
        type: String,
        required: true
    },
    isPublished: {
        type: Boolean,
        default: false
    },
    owner: {
        type: Schema.Types.ObjectId,
        ref: "User"
    },
    videoUrl: {
        type: String,
        required: true
    },
    likes: {
        type: Number,
        default: 0
    },
    dislikes: {
        type: Number,
        default: 0
    },
    comments: [
        {
            type: Schema.Types.ObjectId,
            ref: "Comment"
        }
    ],
},
{
    timestamps: true
}
);

videoSchema.plugin(mongooseAggregatePaginate);

export const Video = mongoose.model("Video", videoSchema);
// Export the model to use it in other files
