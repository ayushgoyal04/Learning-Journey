var express = require('express');
var router = express.Router();



/* GET home page. */
// making a session in the routes and sending cookie in the client
router.get('/', function(req, res, next) {

  res.cookie("age", 25);


  // req.session.AnyName = "MySession";
  req.session.ban = true;
  res.render('index', { title: 'Express' });
});

// reading cookies
router.get("/cc", function(req, res) {

  console.log(req.cookies.age);
  res.send("check");

});

// deleting cookies
router.get("/dc", function(req, res) {

  res.clearCookie("age");
  res.send("Cookkie cleared")
});


router.get("/checkban", function(req, res){
  console.log(req.session);
  if(req.session.ban === true){
    res.send("You are banned from the server")
  } else{
    res.send("No ban is there");
  }
});


router.get("/removeban", function(req, res){
  console.log(req.session);
  req.session.destroy(function(err){
    if (err) throw err;
    res.send("ban removed");
  })
});

module.exports = router;
