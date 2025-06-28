#include<bits/stdtr1c++.h>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    cout<<"capacity- "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity- "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity- "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity- "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity- "<<v.capacity()<<endl; // Tells the total capacity of the vector
    cout<<"Size- "<<v.size()<<endl; // How many elements are stored currently

    cout<<"Element at index 2- "<<v.at(2)<<endl;
    
    cout<<"Before pop"<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();// pops the last element of the vector

    cout<<"After pop"<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    v.clear(); // only clears the size of the vector and not the capacity

    // initialising new vector
    vector<int> a(5,1); // vector of size 5 and all elements are equal to 1

    // copying a vector into another vector
    vector<int> last(a); // vector last is a copy of vector a

}