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
    
    for(int rows=0;rows<n;rows++){
        for(int col=m-1;col>=0;col--){
            
            if(mat[rows][col]==0) cout<<"1"<<" ";
            else cout<<"0"<<" "; 
        }
        cout<<endl;
    }

}