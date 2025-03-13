import { createServer } from 'http';

const hostname = '127.0.0.1';
const port = 3000;

const server = createServer((req, res) => 
    {
       if(req.url === '/')
        {
           res.statusCode = 200;
           res.setHeader('Content-Type','text/plain');
           res.end('Hello Chai\n');
        }
       else if(req.url === '/about')
        {
            res.statusCode = 200;
            res.setHeader('Content-Type','text/plain');
            res.end('About Us\n');
        }
       else
        {
            res.statusCode = 404;
            res.setHeader('Content-Type','text/plain');
            res.end('Page Not Found\n');
        }
    });

server.listen(port,hostname,()=>{
    console.log(`Server running at http://${hostname}:${port}/`);
})

