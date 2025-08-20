#include <bits/stdc++.h>
using namespace std;

void generatePermutations(int arr[], vector<int>& v, bool check[], int n, vector<vector<int>>& result){
    if(v.size() == n){
        result.push_back(v);
        return;
    }

    for(int i = 0; i < n; i++){
        if(!check[i]){
            check[i] = true;
            v.push_back(arr[i]);
            generatePermutations(arr, v, check, n, result);
            v.pop_back();
            check[i] = false;
        }
    }
}

vector<vector<int>> getPermutations(int arr[], int n) {
    vector<vector<int>> result;
    vector<int> v;
    bool check[n];
    fill(check, check + n, false);
    generatePermutations(arr, v, check, n, result);
    return result;
}

int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> permutations = getPermutations(arr, n);

    // Print all the permutations
    for(const auto& perm : permutations){
        for(int num : perm)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
