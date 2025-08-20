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
    int count = 0;
    int spars = m*n/2;
    for(int rows=0;rows<n;rows++){
        for(int col=0;col<m;col++){
            if(mat[rows][col]==0)
            count++;
        }
    }
    if(spars<count) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}