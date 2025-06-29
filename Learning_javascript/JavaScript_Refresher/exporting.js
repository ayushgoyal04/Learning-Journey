// export prefix promotes identifier declaration through binding in es6

// behind the scenes all the bindings are wrappedn in an container and tis is know as a module
// this is done to avoid identifier conflicts, so that the same identifier can be used in different modules without any conflicts


// export keyword will make the identifier declaration into a binding

// module do nto work locally they ony work on the server
export var color = "red";

export function setName(newName){
    color = newName;
}

export const magicNumber = 7;

export function sum(num1, num2){
    return num1 + num2;
}

export class Rectangle {
    constructor(length, width) {
        this.length = length;
        this.width = width;
    }
}
