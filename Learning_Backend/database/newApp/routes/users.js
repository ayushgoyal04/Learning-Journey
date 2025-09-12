/**
 Setting up a database steps
    install mongodb
    install mongoose
    require and setup collection
    make schema
    create model and export
    */


//    require and setup collection

const mongoose = require("mongoose")

// this code will create the database
mongoose.connect("mongodb://127.0.0.1:27017/practiceDB")

//  makign schema-> Determine what will every document will look like
const userSchema = mongoose.Schema({
  username: String,
  name: String,
  age: Number
})

// create model and export
// this makes collection
// mongoose.model(collectionName, schemaName);
module.exports = mongoose.model("user", userSchema);
