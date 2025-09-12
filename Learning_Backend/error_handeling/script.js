const express = require('express')
const app = express();

app.set('view engine', 'ejs');

app.use(
    function(req, res, next){
        console.log("http://localhost:3000");
        next();
    }
);


app.get('/', function(req, res){
    res.send("home page");
})

app.get('/contact', function(req, res){
    res.send("contact page");
})

app.get('/profile', function(req, res){
    res.send("General profile route");
})

// dynamic route
app.get('/profile/:username', function(req, res){
    console.log(req.params.username);
    res.send(`Dynamic route for : ${req.params.username}`);
    // res.send("dr : " + req.params.username )
})

app.get("/error", function(req, res, next){
    throw new Error("testign the error : somethign is wrong")
})

app.use(function errorHandeler (err, req, res, next){
    if(res.headersSent) {
        return next(err)
    }
    res.status(500)
    res.render('error', {error: err});
    // var err = "Thsi is so sad";
    // res.send(`Error: ${err}`);
})

app.listen(3000)
