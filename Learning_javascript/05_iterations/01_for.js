// for

// for (let index = 0; index < 10; index++) {
//     const element = index;
//     if (element === 5){
//         // console.log("Found 5");
//     }
//     // console.log(element);   
// }

for (let i = 0; i < 10; i++) {
    // console.log("Outer loop: ", i);
    for (let j = 0; j < 5; j++) {
        // console.log("Inner loop: ", j);
    }        
}


let myArray = ["flash", "arrow", "superman", "batman"]
for (let index = 0; index < myArray.length; index++) {
    const element = myArray[index];
    // console.log(element);
}


// loops keywords: break, continue

for (let index = 0; index <= 20; index++) {
    if (index === 5){
        // console.log("Found 5");
        break;
    }
    // console.log(`Value of current index is: ${index}`);   
}


for (let index = 0; index <= 20; index++) {
    if (index === 5){
        console.log("Found 5");
        continue;
    }
    console.log(`Value of current index is: ${index}`);   
}