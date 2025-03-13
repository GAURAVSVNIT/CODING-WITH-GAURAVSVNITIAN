import { createLogger, format, transports } from "winston";
const { combine, timestamp, json, colorize } = format;

// Custom format for console logging with colors
const consoleLogFormat = format.combine(
  format.colorize(),
  format.printf(({ level, message, timestamp }) => {
    return `${level}: ${message}`;
  })
);

// Create a Winston logger
const logger = createLogger({
  level: "info", // Other Options Like Warming, Verbos, Debug, Error 
  format: combine(colorize(), timestamp(), json()),
  transports: [ // Transport is a storage device for your logs like Console, File, HTTP, MongoDB, etc.
    new transports.Console({
      format: consoleLogFormat,
    }),
    new transports.File({ filename: "app.log" }), // File Transport to store logs in a file
  ],
});

export default logger;