// import http from 'http';
// import fs from 'fs';
// import path from 'path';
// import { log } from 'console';

// const port = 3001;

// const server = http.createServer((req, res) => {
//     path.join(__dirname, req.url === '/' ? index.html : req.url);

//     console.log(filePath);
    

//     const extName = String(path.extname(filePath).toLowerCase());

//     const mimeTypes = {
//         '.html': 'text/html',
//         '.css': 'text/css',
//         '.js': 'text/javascript',
//         '.png': 'text/png'
//     }

//     const contentType = mimeTypes[extName] || 'application/octet-stream'

//     fs.readFile(filePath,(err,content) =>
//     {
//         if(err)
//         {
//             if(err.code === "ENOENT")
//             {
//                 res.writeHead(404,{"content-type" : "text/html"})
//                 res.end("404:File Not Found BRooo")
//             }
//             res.writeHead(200,{'content-type' : contentType})
//             res.end(content,"utf-8");
//         }
//         else{

//         }

//     });
// });

// server.listen(port, () => {
//     console.log(`Server is running on port ${port}`);
// });

import http from 'http';
import fs from 'fs';
import path from 'path';
import { log } from 'console';
import { fileURLToPath } from 'url';

const port = 3001;

// Get the directory name
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const server = http.createServer((req, res) => {
    const filePath = path.join(__dirname, req.url === '/' ? 'index.html' : req.url);

    console.log(filePath);

    const extName = String(path.extname(filePath).toLowerCase());

    const mimeTypes = {
        '.html': 'text/html',
        '.css': 'text/css',
        '.js': 'text/javascript',
        '.png': 'image/png'
    };

    const contentType = mimeTypes[extName] || 'application/octet-stream';

    fs.readFile(filePath, (err, content) => {
        if (err) {
            if (err.code === "ENOENT") {
                res.writeHead(404, { "Content-Type": "text/html" });
                res.end("404: File Not Found");
            } else {
                res.writeHead(500);
                res.end(`Server Error: ${err.code}`);
            }
        } else {
            res.writeHead(200, { 'Content-Type': contentType });
            res.end(content, "utf-8");
        }
    });
});

server.listen(port, () => {
    console.log(`Server is running on port ${port}`);
});