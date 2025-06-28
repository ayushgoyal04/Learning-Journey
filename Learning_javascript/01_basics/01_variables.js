const accountId = 122333   // We cannot change this variable later.
let accountEmail = "ayush@gmail.com" // RECOMMENDED to use let
var accountPassword = "123456" 
/*
 Not recommended to use var
 because of issue of hoisting (block scope and functional scope).
 var does not recognise scope { }.
*/
accountCity = "Nagpur" // not recommended to use this way.
let accountState; // undefined


// accountId = 445566 // Error: Not allowed to change const.
accountEmail = "1234@rknec.edu"
accountPassword = "12345678"

console.log(accountId)
console.log(accountEmail)
console.log(accountPassword);
console.log(accountCity);
console.log(accountState);


console.table([accountId, accountEmail, accountPassword, accountCity, accountState])