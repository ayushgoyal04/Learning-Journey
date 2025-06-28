// Javascript is a dynamically typed language

/* Primitive Data Types
    7 types-> Number, String, Boolean, Undefined, Null, Symbol, BigInt
*/

// Symbol data type
const id = Symbol('123');
const anotherId = Symbol('123');
console.log(id === anotherId); // false

// BigInt data type 
const bigNumber = 1234n; // either the number is very large or followed by n 




/* Non Primitive or Refrence Data Types
    1. Object
    2. Array
    3. Function
 */

//  Arrays
const herors = ['Superman', 'Batman', 'Flash']

// Objects
let myObj = {
    name: 'Superman',
    age: 30,
    // can contain any other data type
}

// Functions
// function as a variable
const myFunction = function(){
    console.log('This is inside a function');
}


// How to check the data type of a variable-> typeof function
// note-> typeof of null is object (unique case)
// non primitive data types' typeof is object 