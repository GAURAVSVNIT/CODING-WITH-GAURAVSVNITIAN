import mongoose,{ Schema } from "mongoose";

const playlistSchema = new Schema({
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
    owner: {
        type: Schema.Types.ObjectId,
        ref: "User"
    },
    videos: [
        {
            type: Schema.Types.ObjectId,
            ref: "Video"
        }
    ]
}, {
    timestamps: true
});

export const Playlist = mongoose.model("Playlist", playlistSchema);
// Export the model to use it in other files