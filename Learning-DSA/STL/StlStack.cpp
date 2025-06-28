#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Ayush");
    s.push("Rajiv");
    s.push("Goyal");

    cout<<"Top element "<<s.top()<<endl;

    s.pop();

    cout<<"Size "<< s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

}