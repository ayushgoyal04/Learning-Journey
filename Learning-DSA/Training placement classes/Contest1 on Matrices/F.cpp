
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > rotateMatrixClockwise(vector<vector<int> > &matrix)
{
    int n = matrix.size();

    // Transpose the matrix 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(),matrix[i].end());
    }

    return matrix;
}

int main()
{
    int rows, cols;

   int v;
   cin>>v;
   for(int t=0; t<v ; t++)
  { 
    cin >> rows;
    cols=rows;

    vector<vector<int> > matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Rotate the matrix clockwise
    vector<vector<int> > rotatedMatrix = rotateMatrixClockwise(matrix);

    // Print the rotated matrix
    cout<<"Test Case #"<<t+1<<":\n";
    for (int i=0 ; i< rotatedMatrix.size();i++ ) {
        for (int j=0 ; j< rotatedMatrix.size();j++ ) {
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
}
