// api
// destructuring
const course = {
    courseName: 'JavaScript',
    duration: '2 months',
    price: "999"
}

// course.courseName 

const {courseName} = course; // extracting the value of courseName from course object so that we do not have to write course.courseName again and again
// console.log(courseName);

const {courseName: name} = course; // renaming the extracted value
// console.log(name);

