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

// find one user by name
router.get("/findOne", async function(req, res){
  var regex = new RegExp("^Ayush$", 'i');
  let user = await userModel.find({username: regex});
  res.send(user);
});

// find all users
router.get("/findAll", async function(req, res){
  let user = await userModel.find();
  res.send(user);
});

// find users by specific categories
router.get("/findCat", async function(req, res){
  let user = await userModel.find({categories: {$all : ['react', 'frontend']}});
  res.send(user);
});

// find documents with specific date range
router.get("/findDate", async function(req, res){
  var date1 = new Date('2025-01-15');
  var date2 = new Date('2025-10-15');
  let user = await userModel.find({datecreated: { $gte: date1, $lte: date2}});
  res.send(user);
});

// filter out documents based on existance of a field
router.get("/findField", async function(req, res){
  let user = await userModel.find({categories: {$exists: true}});
  res.send(user);
})

// filter out documents based on field length
router.get('/findExpLen', async function(req, res){
  let user = await userModel.find({
    $expr: {
      $and: [
        {$gte: [{$strLenCP: '$nickname'}, 0]},
        {$lte: [{$strLenCP: '$nickname'}, 4]}
      ]
    }
  });
  res.send(user);
});


module.exports = router;
