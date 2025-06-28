// #include<iostream>
// using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans *a;
//     }
//     return ans;
// }

// int main(){
//     // pow(a,b)
//     int a, b;
//     cin>> a >> b;    
//     cout<< "Ans is: "<< power(a,b) <<endl;

// }

#include<iostream>
using namespace std;

int power(){
    int a, b;
    cin>> a >> b;

    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans *a;
    }
    cout<< "Ans is: "<< ans <<endl;
}

int main(){
    power();
    power();
}