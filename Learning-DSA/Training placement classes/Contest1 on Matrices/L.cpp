#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    //int flag=0;
    for(int row=0;row<n;row++){
        if(row%2==0){ 
        for(int col=0;col<m;col++){
            cout<<mat[row][col]<<" ";
        }
        }
        else{
        for(int col=m-1;col>=0;col--){
            cout<<mat[row][col]<<" ";
        }
        }
    }
}