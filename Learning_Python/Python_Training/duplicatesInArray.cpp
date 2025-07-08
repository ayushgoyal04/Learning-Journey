#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = { 2, 3, 2, 2, 5, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp = abs(arr[i]);
        temp = temp - 1;
        if(arr[temp] < 0) {
            v.push_back(temp + 1);
            cout<< temp + 1 << " ";
            arr[temp] = arr[temp] * -1;
        } else {
            arr[temp] = arr[temp] * -1;
        }
    }
}
