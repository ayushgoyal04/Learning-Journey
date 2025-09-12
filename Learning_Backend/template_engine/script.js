const express = require('express')
const app = express();

app.use(
    function(req, res, next){
        console.log("http://localhost:3000");
        next();
    }
);

app.set("view engine", "ejs");

app.get('/', function(req, res){
    res.render("index", {age:12});
})

app.get('/contact', function(req, res){
    res.render("contact", {name: `Ayush`});
})

app.get('/profile', function(req, res){
    res.send("General profile route");
})

// dynamic route
app.get('/profile/:username', function(req, res){
    console.log(req.params.username);
    // res.send(`Dynamic route for : ${req.params.username}`);
    res.send("dr : " + req.params.username )
})

app.listen(3000)
