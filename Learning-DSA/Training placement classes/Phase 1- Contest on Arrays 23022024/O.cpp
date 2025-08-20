#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> v;
    for (int i = 0; i < n; i++) {
        long long int temp;
        cin >> temp;
        v.push_back(temp); // Add element to the vector

    }

    for(int i=0;i<n;i++){
        int temp = v[i];
        for(int j=i+1;j<n;j++){
            if(v[j]== temp){
                cout<<temp<<endl;
                break;
            }

        }
    }    
}
