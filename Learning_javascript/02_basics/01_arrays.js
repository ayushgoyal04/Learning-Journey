const myArr = [1, 2, 3, 4, 5];

const myArr2 = new Array(1, 2, 3, 4, 5);
// console.log(myArr[2]);

myArr.push(6);
myArr.pop();

myArr.unshift(10);
myArr.shift();

console.log(myArr.includes(3)); // boolean 
console.log(myArr.indexOf(3)); 
console.log(myArr.indexOf(13));
// console.log(myArr);

const newArr = myArr.join(); 
// console.log(newArr);
// console.log(typeof newArr); // string


// slice, splice

console.log("A ", myArr);

const myn1 = myArr.slice(1, 3);
console.log(myn1);
console.log("B ", myArr);
// console.log(typeof myn1); // object

const myn2 = myArr.splice(1, 3); // splice changes the original array
console.log(myn2);
console.log("C ", myArr);

