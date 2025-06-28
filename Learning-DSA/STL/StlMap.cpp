#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;

    m[1]= "Ayush";
    m[2]= "Goyal";
    m[100]= "Rajiv";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.insert({5, "Coding"});

    cout<<"is 100 present "<<m.count(100)<<endl;

    cout<<"is 13 present "<<m.count(13)<<endl;

    m.erase(1);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}