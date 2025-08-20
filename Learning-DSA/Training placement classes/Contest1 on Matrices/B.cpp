//NEW
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    for(int j=0; j<m; j++){
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=mat[i][j];
        }
        cout<<sum<<endl;
    }
}