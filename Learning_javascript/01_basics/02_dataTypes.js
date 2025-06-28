"use strict"; // treat all JS code as newer version

// alert( 3 + 3); // pop-up message, worrks in browser, not in node.js (output-> 6)

let name = "Ayush"; // string
let age = 20; // number
let isLoggedIn = true; // boolean

console.log(typeof "Ayush"); // string
console.log(typeof 20); // number
console.log(typeof true); // boolean
console.log(typeof null); // object
console.log(typeof undefined); // undefined


/* PRIMITIVE DATATYPES
    number-> 2 to power 53
    bigint
    string-> ""
    boolean-> true/false
    null-> standalone value, represents nothing
    undefuned-> standalone value, represents undefined
    symbol-> unique identifier (figma, react)
*/

/* 
    OBJECT DATATYPES
*/

// let x  = 3n
// console.log(typeof x)