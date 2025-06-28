// var c = 300
let a = 300

if (true){
    let a = 10
    const b = 20
    // var c = 30;
    // console.log("Inner: ", a)
}

// console.log(a);
// console.log(b);
// console.log(c);


function one(){
    const username = "Ayush"

    function two(){
        const website = "youtube"
        console.log(username);  
    }

    // console.log(website); // error

    two()
}

// one()

if(true){
    const username = "Ayush"
    if(username === "Ayush"){
        const web = " youtube"
        // console.log(username + web);
    }
}


// *********************** interesting example **********************

addone(5) // no error
function addone(num){
    return num + 1
}


addtwo(5) // error
const addtwo = function(num){
    return num + 2
}
