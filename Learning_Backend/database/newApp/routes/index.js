var express = require('express');
var router = express.Router();
const userModel = require("./users");

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render("index", {title: "Ayush"});
});

router.get('/create', async function(req, res) {
  const createdUser = await userModel.create({
    username: "AyushGoyal",
    age: 21,
    name: "Ayush"
  })
  res.json({ message: "created !!!", user: createdUser });
});

router.get("/allusers", async function(req, res){
  let allusers = await userModel.find();
  res.send(allusers);
})

router.get("/delete", async function(req, res){
  let deleteduser = await userModel.findOneAndDelete({
    name: "Ayush"
  });
  res.send(deleteduser);
  console.log(deleteduser)
})



module.exports = router;
