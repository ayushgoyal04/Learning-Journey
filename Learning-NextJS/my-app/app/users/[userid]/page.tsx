
export default async function UserPage({params,}: {params: Promise<{userid: string}>;}){

    const {userid} = await params;

    return (
        <div>
            {userid}
        </div>

    )
}
