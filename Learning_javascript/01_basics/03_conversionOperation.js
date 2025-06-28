// Converting to number
// let score = 50 // number
// let score = "50abc" // NaN
// let score = null // 0
// let score = undefined // NaN
// let score = true // 1
let score = "aString" // NaN

//console.log(typeof score) // number
//console.log(typeof(score)) // number

let valueInNumber = Number(score)
//console.log(typeof valueInNumber) // number
//console.log(valueInNumber) 


// Converting to boolean

// let isLoggedIn = 1 // true
// let isLoggedIn = "Ayush" // true
//let isLoggedIn = "" // false

// let booleanIsLoggedIn = Boolean(isLoggedIn)
// console.log(booleanIsLoggedIn) 


// Converting to string

let someNumber = 20

let stringSomeNumber = String(someNumber)
// console.log(stringSomeNumber) // "20"
// console.log(typeof stringSomeNumber) // string


// **************************** Operations ****************************

let value = 3
let negValue = -value
// console.log(negValue) // -3
// console.log(-negValue) // 3
// console.log(typeof negValue) // number

let str1 = "Hello"
let str2 = "World"

let str3 = str1 + str2;
//console.log(str3) // HelloWorld

//console.log("1" + 2); -> "12"
//console.log(1 + "2"); -> "12"
//console.log("1" + 2 + 2); -> "122"
//console.log(1 + 2 + "2"); -> "32"

//console.log(+true)  -> 1
// console.log(+"") -> 0
// console.log(+"Ayush") -> NaN


// **************************** Increment operator ****************************

let x = 3;
const y = x++;

console.log(`x:${x}, y:${y}`);
// output: "x:4, y:3"

let a = 3;
const b = ++a;

console.log(`a:${a}, b:${b}`);
// output: "a:4, b:4"