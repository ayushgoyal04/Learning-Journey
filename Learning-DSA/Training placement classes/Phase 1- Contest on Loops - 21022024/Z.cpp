#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b1[4][13]={{0},{0}};//b2[3][10]={{0},{0}},b3[3][10]={{0},{0}},b4[3][10]={{0},{0}};
while(n--){
    int  num;
    char ch;
    cin>>ch>>num;
    switch (ch)
    {
    case 'S'://0
        /* code */ 
        b1[0][num-1] = 1;

        break;
    
    case 'H'://1
        /* code */
        b1[1][num-1] = 1;

        break;
    
    case 'C'://2
        /* code */
        b1[2][num-1] = 1;

        break;
    
    case 'D'://3
        /* code */
        b1[3][num-1] = 1;

        break;    
    }
    
}

for(int i=0;i<=3;i++){
    for(int j=0;j<13;j++){
        if(i==0){ 
        if(b1[i][j]!=1){
            cout<<"S"<<" "<<j+1<<endl;
        }
        }
        if(i==1){
        if(b1[i][j]!=1){
            cout<<"H"<<" "<<j+1<<endl;
        }
        }
        if(i==2){
        if(b1[i][j]!=1){
            cout<<"C"<<" "<<j+1<<endl;
        }
        }
        if(i==3){
        if(b1[i][j]!=1){
            cout<<"D"<<" "<<j+1<<endl;
        }
        }
    }
}
}
