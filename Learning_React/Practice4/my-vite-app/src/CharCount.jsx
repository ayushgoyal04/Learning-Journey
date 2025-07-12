import React, {useState} from 'react';

const CharCount = () => {
    const [name, setname] = useState("");
    return (
        <div>
            <input type="text" placeholder='Enter' value={name} onChange={(e) => setnameme(e.target.value)} />
            <p>Character Count: {name.length}</p>
        </div>
    )
}

export default CharCount;
