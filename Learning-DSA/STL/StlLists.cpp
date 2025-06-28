#include<bits/stdtr1c++.h>
#include<list>

using namespace std;
int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i: l){
        cout<<i<<" ";
    }
    
    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"size "<<l.size()<<endl;

    //  list<int> n(l); --> Copies list l into another list n
    list<int> n(5, 100);
    cout<<"5 times 100 "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
}