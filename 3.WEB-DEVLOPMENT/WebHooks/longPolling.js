import http from 'http';

const server = http.createServer((req, res) => {
    if(req.url === '/poll') {
        // Long polling logic here
        setTimeout(() => {
            res.writeHead(200,{
                'Content-Type': 'application/json'
            });
            res.end(JSON.stringify({
                message: `Hello at ${new Date().toISOString()}`
            }));
        }, 3000);
    } else {
        res.writeHead(200);
        res.end('Server is running');
    }
});

server.listen(3000, () => {
    console.log('Server is listening on port 3000');
});
