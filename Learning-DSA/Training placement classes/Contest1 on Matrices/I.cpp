#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){ 
    int n1, m1;
    cin >> n1 >> m1;

    int mat1[n1][m1];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cin >> mat1[i][j];
        }
    }

    int n2, m2;
    cin >> n2 >> m2;

    int mat2[n2][m2];
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> mat2[i][j];
        }
    }


    int mul[n1][m2];
    for (int i = 0; i < n1; i++) {    
        for (int j = 0; j < m2; j++) {    
            mul[i][j] = 0;    
            for (int k = 0; k < m1; k++) {    
                mul[i][j] += mat1[i][k] * mat2[k][j];    
            }    
        }    
    }

    // for printing result    
    for (int i = 0; i < n1; i++) {    
        for (int j = 0; j < m2; j++) {    
            cout << mul[i][j] << " ";    
        }    
        cout << "\n";    
    }    

}
}