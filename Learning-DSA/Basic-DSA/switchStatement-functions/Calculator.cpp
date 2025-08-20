#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;

    bool again = true;
while (again)
{
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter operation"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Ans: "<<a+b<<endl;;
        break;
    
    case '-':
        cout<<"Ans: "<<a-b<<endl;
        break;

    case '*':
        cout<<"Ans: "<<a*b<<endl;;
        break;

    case '/':
        cout<<"Ans: "<<a/b<<endl;;
        break;

    case '%':
        cout<<"Ans: "<<a%b<<endl;;
        break;            
    default:
    cout<<"Wrong operator"<<endl;
        break;
    }
    cout<<"Enter 1 to play again, enter 0 to quit"<<endl;
    cin>>again;
}
}