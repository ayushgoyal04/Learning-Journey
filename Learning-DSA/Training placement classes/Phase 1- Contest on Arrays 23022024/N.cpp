#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
int sum = 0;
    vector<long long int> v;
    for (int i = 0; i < n; i++) {
        long long int temp;
        cin >> temp;
        if(temp%2!=0){
            sum += temp;
        }
        v.push_back(temp); // Add element to the vector
    }
    cout<<sum<<endl;
    
}
