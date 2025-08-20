#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> arr;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    int count =0;
    for(auto i : arr){
        count++;
    }
cout<<count<<endl;

}
