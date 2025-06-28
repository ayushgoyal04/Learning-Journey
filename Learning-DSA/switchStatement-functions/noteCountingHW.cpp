#include<iostream>
using namespace std;
int main(){
    int n, currency = 100;
    cout<<"Enter amount"<<endl;
    cin>>n;
    switch (currency)
    {
    case 100:
        int notes;
        notes= n/100;
        cout<<"You need "<<notes<<" 100RS notes"<<endl;
        n = n- 100*notes;
    
    case 50:
        notes= n/50;
        cout<<"You need "<< notes <<" 50RS notes"<<endl;
        n = n- 50*notes;
    
    case 20:
        notes= n/20;
        cout<<"You need "<< notes <<" 20RS notes"<<endl;
        n = n- 20*notes;

    case 10:
        notes= n/10;
        cout<<"You need "<< notes <<" 10RS notes"<<endl;
        n = n- 10*notes;

    case 1:
        cout<<"You need "<< n <<" 1RS notes"<<endl;

    default:
        break;
    }

}