 const score = 400;
 const balance = new Number(40000);   // Number object
 console.log(score);
 console.log(balance);
 
 console.log(balance.toString().length);
 console.log(balance.toFixed(2)); // 40000.00

 const otherNumber = 12223.8966736;
 console.log(otherNumber.toFixed(2)); 
 console.log(otherNumber.toPrecision(3)); 
 console.log(otherNumber.toPrecision(5)); 
 console.log(otherNumber.toPrecision(7)); 
 
 const manyZeroes = 100000000000
 console.log(manyZeroes.toExponential());
 console.log(manyZeroes.toLocaleString('en-IN'));
 console.log(manyZeroes.toLocaleString());


 