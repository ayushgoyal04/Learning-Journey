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
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            ans += mat[row][col]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}