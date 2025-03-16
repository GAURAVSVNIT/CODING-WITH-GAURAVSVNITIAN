class ApiError extends Error {
  constructor(statusCode, 
    message="Something went wrong",
    isOperational = true, 
    stack = '',
    error = []) {
    super(message);
    this.statusCode = statusCode;
    this.data = null;
    this.message = message;
    this.success = false;
    this.error = error;
    this.isOperational = isOperational;

    // Ensure the name of this error is the same as the class name
    //this.name = this.constructor.name;
    
    if (stack) {
      this.stack = stack;
    }
    else {
      Error.captureStackTrace(this, this.constructor);
    }
    }
}
export { ApiError };