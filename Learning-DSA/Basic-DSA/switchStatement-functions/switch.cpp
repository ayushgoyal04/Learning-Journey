#include<iostream>
using namespace std;

int main() {

    char ch = '1';
    int num = 1;
    switch (ch)
    {
    case 1:
        cout<<"First"<<endl;
        break;
    
    case '1':
        cout<<"Second"<<endl;
        // nested switch
        switch (num)
        {
        case 1:
            cout<<"The value of num is "<<num<<endl;
            break;
        
        default:
            break;
        }
        break;
// default- not mandatory
    default:
        cout<<"Default"<<endl;
        break;
    }
}