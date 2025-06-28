// singleton
// Object.create // constructor method syntax

// object literals

const mySymbol = Symbol("key1")

const JsUser = {
    name: "Ayush",
    "full name": "Ayush Goyal", // can only be accessed through square bracket in console log
    age : 20,
    location: "Nagpur",
    [mySymbol] : "myKey1", // symbol
    email: "ayush@gmail.com",
    inLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

console.log(JsUser.email)
console.log(JsUser["email"])
console.log(JsUser["full name"])
console.log(JsUser[mySymbol])

JsUser.email = "user@yahoo.com";
// Object.freeze(JsUser) //  Now the values in JsUser cannot change

JsUser.name = "Some Other Name";
console.log(JsUser.name); // The name variable in object will not change
console.log(JsUser)

JsUser.greeting = function(){
    console.log("Hello fellow js user");
}
JsUser.greeting2 = function(){
    console.log(`Hello fellow js user, ${this.name}`); // backtics ``
}

console.log(JsUser.greeting());
console.log(JsUser.greeting2());