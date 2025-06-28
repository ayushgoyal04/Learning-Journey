#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(0);
    s.insert(4);
    s.insert(4);
    s.insert(54);
    s.insert(0);
    s.insert(-1);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());

    cout<<"is 5 Present? "<<s.count(5)<<endl;
    cout<<"is -5 Present? "<<s.count(-5)<<endl;

    //iterator
}
