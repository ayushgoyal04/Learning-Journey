#include<bits/stdtr1c++.h>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"Print element at index 1- "<<d.at(1)<<endl;

    cout<<"front- "<<d.front()<<endl;
    cout<<"back- "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;
}