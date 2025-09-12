const express = require('express')
const app = express()

// middleware will be executed before the route is executed
app.use(
    /*
    req-> user related data ie, the one making the request (client/ incoming data)
    res-> response ie, the data we are sending (outgoing info/ method).. res has controls for us to responde

    */
    function(req, res, next){
        console.log("Hello from middleware");
        console.log("hidden: http://localhost:3000");
        next();
    }
);

app.get('/', function (req, res) {
    res.send("Hello world using Nodemon")
})

app.get('/profile', function (req, res) {
    res.send("Hello world using PROFILE")
})

app.listen(3000)
