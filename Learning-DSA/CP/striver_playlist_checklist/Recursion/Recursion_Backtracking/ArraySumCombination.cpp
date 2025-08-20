#include <bits/stdc++.h>
using namespace std;


// infinite supply of coins (no backtracking)
void SumCom(int arr[], int size, string ans, int cs, int target) {
    if (cs == target) {
        cout << ans << endl;
        return;
    }

    if (cs > target) {
        return;
    }

    for (int i = 0; i < size; i++) {
        SumCom(arr, size, ans + to_string(arr[i]), cs + arr[i], target);
    }
}

// infinite sullply of coins (backtracking)
void SumComBack(int arr[], int size, string ans, int cs, int target) {
    if (cs == target) {
        cout << ans << endl;
        return;
    }

    if (cs > target) {
        return;
    }

    for (int i = 0; i < size; i++) {
        cs+=arr[i]; // we could have done this is parameter passing, but we didnt, therefore we need backtracking
        SumComBack(arr, size, ans + to_string(arr[i]), cs, target);
        cs-=arr[i]; // backtrack
    }
}

// finite supply of coins
 void finitesupply(int arr[], int size, string ans, int cs, int target, int start){
    if (cs == target) {
        cout << ans << endl;
        return;
    }

    if (cs > target) {
        return;
    }

    for (int i = start; i < size; i++) {
        finitesupply(arr, size, ans + to_string(arr[i]), cs + arr[i], target, i+1);
    }

}


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    SumCom(arr, size, "", 0, 5);
    SumComBack(arr, size, "", 0, 5);
     finitesupply(arr, size, "", 0, 5, 0);
}


// #include<bits/stdc++.h>
// using namespace std;
// void SumCom(int arr[], string ans, int cs, int target ){
//     if(cs==target){
//         cout<<ans<<endl;
//         return;
//     }
//     if(cs>target){
//         return;
//     }
//     SumCom(arr, ans+"1", cs+1, target);
//     SumCom(arr, ans+"2", cs+2, target);
//     SumCom(arr, ans+"3", cs+3, target);
//     SumCom(arr, ans+"4", cs+4, target);
//     SumCom(arr, ans+"5", cs+5, target);   
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     SumCom(arr, "", 0, 5);
// }