import mongoose,{ Schema } from "mongoose";
import mongooseAggregatePaginate from "mongoose-aggregate-paginate-v2";

const commentSchema = new Schema({
    video: {
        type: Schema.Types.ObjectId,
        ref: "Video"
    },
    comment: {
        type: String,
        required: true
    },
    commentedBy: {
        type: Schema.Types.ObjectId,
        ref: "User"
    },
    userId: {
        type: Schema.Types.ObjectId,
        ref: "User"
    }
}, {
    timestamps: true
});

commentSchema.plugin(mongooseAggregatePaginate);

export const Comment = mongoose.model("Comment", commentSchema);
// Export the model to use it in other files