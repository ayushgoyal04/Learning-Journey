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
    int mat2[n][m];
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            cin>>mat2[rows][col];
        }
    }    
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            mat[rows][col] = mat[rows][col] + mat2[rows][col];
        }
    }
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            cout<<mat[rows][col]<<" ";
        }
        cout<<endl;
    }

}