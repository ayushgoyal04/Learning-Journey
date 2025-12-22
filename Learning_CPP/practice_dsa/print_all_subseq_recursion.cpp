#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// int arr[] = {3, 1, 2};
vector<int> arr = {3, 1, 2};
int N = 3;
// take == not-take concept
/*
template
fun(index, []){
    if(index>=N){
        print([])
        return;
    }
    [].push_back(arr[i]);
    f(index+1, []) -> take
    [].remove[arr[i]]
    f(ind+1, []) -> not take
}
*/

/*
time complexity-> 2^n * n(pritning)
space complexity-> N depth of recursion at max is n 
*/

void print(vector<int> &v)
{
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void printSub(int index, vector<int> &v)
{
    if(index >= N)
    {
        print(v);
        return;
    }
    // take
    v.push_back(arr[index]);
    printSub(index+1, v);

    // not take
    v.pop_back();
    printSub(index+1, v);
}

int main()
{
    vector<int> ds;
    printSub(0, ds);


}
