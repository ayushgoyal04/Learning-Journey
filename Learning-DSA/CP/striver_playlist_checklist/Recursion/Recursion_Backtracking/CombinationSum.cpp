#include <bits/stdc++.h>
using namespace std;

void combinationSum(int arr[], string ans, int size, int cs, int target){
    if (cs == target) {
        cout << ans << endl;
        return;
    }

    if (cs > target) {
        return;
    }

    for (int i = 0; i < size; i++) {
        cs += arr[i];
        combinationSum(arr, ans + to_string(arr[i]), size, cs, target);
        cs -= arr[i];
    }

}

int main(){

    int arr[4] = {2,3,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int cs = 0;
    int target = 7;

    combinationSum(arr, "", size, cs, target);

}