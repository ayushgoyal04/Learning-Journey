import React, {useState} from 'react'


export const Toggle = () => {
  const [isToggled, setIsToggle] = React.useState(false);
    return (
    <div>
        <p>
            {isToggled ? "The button is ON" : "The button is OFF"}
            <button style={{backgroundColor: isToggled ? "green" : "red"}}
            onClick={() => setIsToggle(!isToggled)}>Toggle</button>
        </p>
    </div>
  )
}

