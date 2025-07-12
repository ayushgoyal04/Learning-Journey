// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
// import './App.css'
// // import Welcome from './Welcome_component'
// import Temp from './Temp'
// import CharCount from './CharCount'
// import { Toggle } from './Toggle'

// function App() {
//   // const name = "Ayush"
//   // const surname = "Goyal"
//   const [count, setCount] = useState(0)
//   const name = "Ayush Goyal"

//   return (
//     <div>
//       {/* <Temp /> */}
//       {/* <CharCount /> */}
//       <Toggle />
//     </div>
//   )
// }

// export default App


import React from 'react'
import axios from 'axios'
const App = () => {
  const [email, setEmail] = React.useState("");
  const [password, setPassword] = React.useState("");
  const handleSubmit = (e) => {
    e.preventDefault();
    console.log("Email:", email);
    console.log("Password:", password);

    // how to support cors
    axios.post('http://localhost:5000/auth', { email, password })
      .then(response => {
        console.log("Response:", response.data);
      })
      .catch(error => {
        console.error("Error:", error);
      });
  };
  return (
    <div style ={
      {
        backgroundColor:"gray",
        display: "flex",
        flexDirection: "column",
        alignItems: "center",
        justifyContent: "center",
        height: "100vh"
      }
    }>

    <form style = {      {
        display: "flex",
        flexDirection: "column",
        alignItems: "center",
        justifyContent: "center",
      }} onSubmit={handleSubmit}>


      <input type="email" placeholder='Enter your email'required style={{color:"green"}} onChange={(e) => setEmail(e.target.value)} />

      <br />

      <input type="password" placeholder='Enter your password'required style={{color:"green"}} onChange={(e) => setPassword(e.target.value)} />


      <br />
      <button type = "submit">Submit</button>
    </form>

    </div>
  )
}

export default App
