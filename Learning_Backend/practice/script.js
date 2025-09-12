// express js
// install express

// npm i express

// express js boilerplate
const express = require('express')
const app = express();

console.log("Servert at : http://localhost:3000");

app.set("view engine", "ejs");

app.use(express.static("./public"));

app.get('/', function(req, res){
    res.render("index");
});

// set up ejs
    // instal ejs
        // npm i ejs
    // set view ejs
    // create ejs files
    // render ejs files inside routes

// express static setup

// architecture of public folder
/**
 * stylesheets
 * javascript
 * images
 */
app.listen(3000);
