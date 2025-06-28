const coding = ['JavaScript', 'Python', 'Java', 'C#', 'Ruby', 'C++', 'Go', 'Kotlin'];

// coding.forEach( function (item) {
//     console.log(item);
// } )

coding.forEach( (item) => {
    // console.log(item);
})

function printMe(item) {
    console.log(item);
}

// coding.forEach(printMe); // give fuunction refrence, not calling the function [do not "use printme()"]

coding.forEach( (item, index, arr) => {
    // console.log(item, index, arr);
} )



// forEach with arrays of objects [useful for databases and apis]
const myCoding = [
    {
        langName: 'JavaScript',
        langFile: 'js'
    },
    {
        langName: 'Python',
        langFile: 'py'
    },
    {
        langName: 'Java',
        langFile: 'java'
    },
    {
        langName: 'C#',
        langFile: 'cs'
    },
    {
        langName: 'C++',
        langFile: 'cpp'
    },
    {
        langName: 'Go',
        langFile: 'go'
    },
    {
        langName: 'Kotlin',
        langFile: 'kt'
    } 
]

myCoding.forEach( (item) => {
    console.log(`The langusge ${item.langName} is abbreviated as ${item.langFile}`);
})