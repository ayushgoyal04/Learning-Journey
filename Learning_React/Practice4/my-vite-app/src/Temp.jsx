import React, { useState } from 'react';

export default function Temp() {
    const [name, setName] = useState("");
    return (
        <div>
            <input type="text" value={name} onChange={(e) => setName(e.target.value)} />
            <p>Welcome, this is {name}</p>
            <button onClick={() => setName("")}>Clear</button>
        </div>
    )
}


