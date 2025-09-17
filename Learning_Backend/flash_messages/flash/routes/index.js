var express = require('express');
var router = express.Router();
const userModel = require("./users");

/* GET home page. */
router.get('/', function(req, res) {
  res.render('index');
});

router.get('/failed', function(req, res){
  //format->  req.flash("Name", "data");
  req.flash("age", 12);
  res.send("We did it");
});

router.get('/checkData', function(req, res){
  console.log(req.flash("age"));
  res.send("Check terminal");
})

router.get("/create", async function(req, res){
  let userdata =  await userModel.create({
    username: "Kunal",
    nickname: "pussi",
    description: "Round 1 clear nahi hota",
    categories: ['js', 'frontend', 'react', 'next', 'node', 'backend'],
  });
  res.send(userdata);
});

module.exports = router;
