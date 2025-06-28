#include<bits/stdc++.h>
using namespace std;

void PrintSqMatrix(int n, int mat[100][100]){
    cout<<"printing the matrix"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<mat[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintRecMatrix(int n,int m, int mat[100][100]){
    cout<<"printing the matrix"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<mat[row][col]<<" ";
        }
        cout<<endl;
    }
}

void rowSumSq(int n, int mat[100][100]){
    cout<<"Row sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            ans += mat[row][col]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void colSumSq(int n, int mat[100][100]){
    // 2D matrix
    cout<<"Col sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            ans += mat[col][row]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void rowSumRec(int n,int m, int mat[100][100]){
    cout<<"row sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            ans += mat[row][col]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void colSumRec(int n, int m,int mat[100][100]){
    // 2D matrix
    cout<<"Col sum"<<endl;
    int ans = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            ans += mat[col][row]; 
        }
        cout<<ans<<endl;
        ans =0;
    }
}

void DiagonalPrimary(int n, int mat[100][100]){
    cout<<"Print diagonal"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row==col) cout<<mat[row][col];
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } 
}

void DiagonalSecondary(int n, int mat[100][100]){
    cout<<"Print diagonal"<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row+col == n-1) cout<<mat[row][col];
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } 
}

void borderElements(int n, int m, int mat[100][100]){
    for(int row=0; row<n; row++){
        for(int col=0;col<m; col++){
            if(row==0 || col==0 || row==n-1 || col==m-1){
                cout<<mat[row][col]<<" ";
            }
            else
            cout<<"  ";
        }cout<<endl;
    }
}



int main(){
    // initializing a square matrix (Accepting the matrix)
    // int n;
    // cin>>n;
    // int mat[100][100];        
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cin>>mat[row][col];
    //     }
    // } 

    // initializing a rectangular matrix (Accepting the matrix)
    // int n,m;
    // cin>>n>>m;
    // int mat[100][100];
    // for(int rows=0;rows<n;rows++){
    //     for(int col=0;col<m;col++){
    //         cin>>mat[rows][col];
    //     }
    // } 
    return 0;
}