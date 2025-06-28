// date typeof is object

let myDate = new Date();
console.log(myDate.toString());
console.log(myDate.toLocaleString());
console.log(myDate.toDateString());

// months start with 0 in js
let myCreatedDate = new Date(2023, 0, 23)
console.log(myCreatedDate.toDateString());


let myCreatedDate2 = new Date(2023, 0, 23,  10, 30, 0)
console.log(myCreatedDate2.toLocaleString());


let myCreatedDate3 = new Date("2023-02-14");
console.log(myCreatedDate3.toLocaleString());


let myTimeStamp = Date.now();
console.log(myTimeStamp); // timestamp in milliseconds

console.log(myCreatedDate3.getTime()); // timestamp in milliseconds

console.log(Math.floor(Date.now()/1000)) // seconds

let newDate = new Date();
console.log(newDate.getMonth() + 1);
console.log(newDate.getDate());
console.log(newDate.getDay());
console.log(newDate.getFullYear());


newDate.toLocaleString('default', {
    weekday: 'long',
    month: 'long',
    day: 'numeric',
    year: 'numeric'
})
