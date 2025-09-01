async function makePostReq() {
    const req = await fetch(`${process.env.NEXT_URL}/api/hello`, {
        method: "POST",
        headers: {
            "Content-Type": "application/json",
        },
    })

    let data;
    try {
        data = await req.json();
    } catch (e) {
        data = null; // or handle the error as needed
    }
    return { data };
}


export default async function Friends() {

    const { data } = await makePostReq()
    return <h1>Hey friends, {data?.message ?? "No message available"}</h1>
}
