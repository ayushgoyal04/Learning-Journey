// creatign a functional component

import React from 'react'


// const Welcome = (props) => {
//     return (
//         <div>
//             <p>Welcome, this is {props.name}</p>
//         </div>
//     )
// }

// export default Welcome


// this is recommended way to destructure props
// component is nothig but a function becoming a html tag
// here, Welcome is a functional component and will be used like a tag in App.jsx
// props is an object that contains all the properties passed to the component
const Welcome = ({ name, surname }) => {
    return (
        <div>
            <p>Welcome, this is {name}, {surname}</p>
            {2+2} {/* this is a comment in JSX, it will not be rendered */}
            <p>2 + 2 = {2 + 2}</p> {/* this is how you can use JavaScript expressions in JSX */}
        </div>
    )
}
export default Welcome
