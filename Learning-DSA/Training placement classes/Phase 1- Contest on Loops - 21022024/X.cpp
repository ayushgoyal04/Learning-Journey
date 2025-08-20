#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b1[3][10]={{0},{0}},b2[3][10]={{0},{0}},b3[3][10]={{0},{0}},b4[3][10]={{0},{0}};
while(n--){
    int  b, f, r, v;
    
    cin>> b>>f>> r>> v;
    switch (b)
    {
    case 1:
        /* code */
        b1[f-1][r-1] = b1[f-1][r-1] + v;

        break;
    
    case 2:
        /* code */
        b2[f-1][r-1] = b2[f-1][r-1] + v;

        break;
    
    case 3:
        /* code */
        b3[f-1][r-1] = b3[f-1][r-1] + v;

        break;
    
    case 4:
        /* code */
        b4[f-1][r-1] = b4[f-1][r-1] + v;

        break;    
    
    default:
        break;
    }
    
}

for(int i=0;i<3;i++){cout<<" ";
    for(int j=0;j<10;j++){
        cout<<b1[i][j];
        if(j<9){
            cout<<" ";
        }
    }
    cout<<endl;
}

cout<<"####################"<<endl;

for(int i=0;i<3;i++){cout<<" ";
    for(int j=0;j<10;j++){
        cout<<b2[i][j];
        if(j<9){
            cout<<" ";
        }
    }
    cout<<endl;
}
cout<<"####################"<<endl;


for(int i=0;i<3;i++){cout<<" ";
    for(int j=0;j<10;j++){
        cout<<b3[i][j];
        if(j<9){
            cout<<" ";
        }
    }
    cout<<endl;
}
cout<<"####################"<<endl;


for(int i=0;i<3;i++){cout<<" ";
    for(int j=0;j<10;j++){
        cout<<b4[i][j];
        if(j<9){
            cout<<" ";
        }
    }
    cout<<endl;
}
//cout<<endl<<"####################"<<endl;
}