
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> RotateMatrix(vector<vector<int>> mat,int n, int m){
   vector<vector<int>> rotatedMatrix(m,vector<int>(n));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        rotatedMatrix[j][n - i - 1] = mat[i][j];
    }
   }
   return rotatedMatrix;
} 



int main()
{
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n = matrix.size();  //row
    int m = matrix[0].size(); //column
    vector<vector<int>> ans = RotateMatrix(matrix, n, m);

    cout << "The Final matrix is: ";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout <<endl;
    }
    return 0;
}
