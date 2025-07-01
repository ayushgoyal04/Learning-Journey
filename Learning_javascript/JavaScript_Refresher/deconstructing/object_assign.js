const coffee = { } ;
const noCream = { cream : false };
const noMilk = { milk : false };

Object.assign(coffee, noCream);
// 1st parameter is the trget, secnd parameter is the source
console.log(coffee);

Object.assign(coffee, noMilk);
console.log(coffee);

const coffeeWithMilk = Object.assign({}, coffee, {milk : true})
console.log(coffeeWithMilk)
