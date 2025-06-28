function sayMyName(){
    console.log("Ayush");
}

// sayMyName // refrence
// sayMyName() // execution

// sayMyName();
// sayMyName();

// function addTwoNumbers(number1, number2){
//     console.log(number1 + number2);
// }

// addTwoNumbers(2, 5);
// addTwoNumbers(2, "5");
// addTwoNumbers(2, "A");
// addTwoNumbers(2, null);


function addTwoNumbers(number1, number2){
    // let result = number1 + number2;
    // return result;
    return number1+number2;
}

const result = addTwoNumbers(2, 5);
// console.log(result);

function loginUserMessage(userName = "Jon Doe"){ // jon doe is default value, therefore we now do not need the if statement
    if (userName === undefined || !userName) { // both conditions are same
        console.log("Pls enter a username");
        return;
    }
    else{ 
    return `${userName} just logged in successfully!!!`;
    }
}
// console.log(loginUserMessage("Ayush"));
// console.log(loginUserMessage());


// if we do not know the number of parameters in numbers
function calculateCartPrice(val1, cal2, ...num1){
    return num1
}
console.log(calculateCartPrice(200, 400, 500, 5000));

const user = {
    username: "Ayush",
    age: 25
}

function handleObjects(anyObject){
    console.log(`user's name is ${anyObject.username} and age is ${anyObject.age}`);
}
// handleObjects(user);
// handleObjects({
//     username : "Divyansh",
//     age : 16
// })

const myNewArray = [1, 2, 3, 4, 5, 69]

function returnSecondValue (getArray){
    return getArray[1];
}
console.log(returnSecondValue(myNewArray));
console.log(returnSecondValue([1, 69, 3, 4, 5, 6]));
