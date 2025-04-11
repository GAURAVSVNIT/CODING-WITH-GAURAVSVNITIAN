// So let's start with the very first thing, which is

// asynchronous handler, or also known as async handler.

// This is being used by and with the variety

// of names, but the whole idea is really simple.

// You will design a lot of get requests,

// lots of post requests, and there are potential

// chances that that request might fail.

// In those failure cases, you want to wrap up

// all of your requests into a try catch block.

// Now imagine writing try catch blocks so many times

// in every single controller that you'll be writing.

// Yeah, that's not easy, and that's also not a great piece

// of code, really not that easy to understand as well.

// And there are also potentials that some of

// the requests might be asynchronous, and in that

// how you're handling these asynchronous requests.

// So the standard practice is that we want to

// just wrap all of our requests inside an asynchronous

// handler into a simple promise so that we can

// just handle the error a little bit more gracefully.

// So we use a concept known as

// in JavaScript, known as higher order function

// to wrap all of our asynchronous requests

const asyncHandler = (requestHandler) => {
    return (req, res, next) => 
    {
        Promise
        .resolve(requestHandler(req, res, next))
        .catch((err)=>next(err));
    }};
// So this is a simple function that takes a request handler as an argument and returns a function that takes three arguments, request, response, and next. And inside that function, we are resolving the request handler, and we are catching the error if there is any error. And we are passing that error to the next function. So this is a simple asynchronous handler that we can use in our controllers to handle all of our asynchronous requests. So let's see how we can use this asynchronous handler in 
// our controllers. So let's go to our controllers and see how we can use this asynchronous handler

export default asyncHandler;