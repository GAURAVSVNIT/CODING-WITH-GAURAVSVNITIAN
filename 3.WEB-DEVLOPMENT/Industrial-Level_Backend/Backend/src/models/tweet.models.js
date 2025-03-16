import mongoose,{ Schema } from "mongoose";

const tweetSchema = new Schema({
    tweet: {
        type: String,
        required: true
    },
    tweetedBy: {
        type: Schema.Types.ObjectId,
        ref: "User"
    }
}, {
    timestamps: true
});

export const Tweet = mongoose.model("Tweet", tweetSchema);
// Export the model to use it in other files