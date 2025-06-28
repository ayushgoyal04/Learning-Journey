const user = {
    username: "Ayush",
    age : 20,

    welcomeMessage: function() {
        console.log(`${this.username}, welcome to the website`)
        console.log(this);
    }
}

// user.welcomeMessage()
// user.username = "Divyansh";
// user.welcomeMessage()
// console.log(this);

// function chai(){
    // let username = "Ayush"
    // console.log(this);
    // console.log(this.username) // undefined-> this works on objects not functions
// }
// chai()


// const chai = function(){
//     let username = "Ayush"
//     console.log(this.username);
// }
// chai()


const chai = () => {
    let username = "Ayush"
    console.log(this.username);
    console.log(this);
}
chai()

// const addTwo= (num1, num2) => {
//     return num1+ num2
// }

// implicit return [no return keyword] do not use curly bracket
// const addTwo= (num1, num2) => num1+ num2
// const addTwo= (num1, num2) => ( num1+ num2 )

// need to wrap object in parenthesis in order to return
const addTwo= (num1, num2) => ({ username: "Ayush" })

console.log(addTwo(2, 5))