#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Ayush");
    q.push("Rajiv");
    q.push("Goyal");

    cout<<"Size before pop "<<q.size()<<endl;

    cout<<"First element before pop "<<q.front()<<endl;

    q.pop(); 

    cout<<"First element after pop "<<q.front()<<endl;;

    cout<<"Size after pop "<<q.size()<<endl;


}