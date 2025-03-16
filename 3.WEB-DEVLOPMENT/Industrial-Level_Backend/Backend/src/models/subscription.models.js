import mongoose,{ Schema } from "mongoose";

const subscriptionSchema = new Schema({
    subscriber: {
        type: Schema.Types.ObjectId,
        ref: "User"
    },
    subscribedTo: {
        type: Schema.Types.ObjectId,
        ref: "User"
    }
}, {
    timestamps: true
});

export const Subscription = mongoose.model("Subscription", subscriptionSchema);
// Export the model to use it in other files