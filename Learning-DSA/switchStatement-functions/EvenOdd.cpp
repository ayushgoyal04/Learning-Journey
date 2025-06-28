#include<iostream>
using namespace std;

bool IsEven(int n){
    // 1 -> Even
    // 0 -> Odd
    if(n%2 == 0){
        return 1;
    }
    else return 0;
}

int main(){
    int num;
    cin >> num;
    if(IsEven(num)){
        cout << "Number is Even"<< endl;
    }
    else cout<< "Odd number"<<endl;

}