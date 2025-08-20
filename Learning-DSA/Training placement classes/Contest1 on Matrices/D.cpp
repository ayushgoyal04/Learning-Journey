#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;

    cin>>n>>m;
    int mat[n][m];
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            cin>>mat[rows][col];
        }
    } 
    if(n==m){ 
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            
            cout<<mat[col][rows]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        int mat2[n][m];
        for(int rows=0;rows<m;rows++){
        for(int col=0;col<n;col++){
            
            cout<<mat[col][rows]<<" ";
        }
        cout<<endl;
    }
    }

}