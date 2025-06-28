const userEmail = "ayush@gmail.com"
const userEmail2 = ""

if (userEmail){
    console.log("Got usser email");
}
else{
    console.log("Do not have user email");
    
}

// falsy values=> false, 0 , -0, BigInt 0n, "", null, NaN, undefined
// truthy values=> "0", 'false', " ", [], {}, function(){}

// how to check empty arrays
const myArr = []
if (myArr.length === 0){
    console.log("Array is empty");
}

// how to check empty objects
const myObj = {}
if (Object.keys(myObj).length === 0){ // Object.keys() returns an array of a given object's own enumerable property names
    console.log("Object is empty");
}


// Nullish Coalescing Operator (??): It is used to provide a default value for a variable that is null or undefined.

let val1;
// val1 = 5 ?? 10; // 5  // if val1 is null or undefined, then 10 will be assigned to val1
// console.log(val1);

val1 = null ?? 10; // 10
val1 = undefined ?? 10; // 10
val1 = null ?? undefined ?? 10; // 10
val1 = null ?? 33 ?? 10; // 33


// Ternianry Operator (?:): It is used to write conditional statements in a single line.
// condition ? true : false

const Price = 100
Price >=80 ? console.log("Expensive, more that 80") : console.log("Cheap, less than 80");