#include <bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>> matrix,int target){
    int n=matrix[0].size();
    int m=matrix.size();
    int row=0;
    int col=n-1;
    
    while(row<m && col>=0){
        if(target==matrix[row][col]) return true;
        else if(target>matrix[row][col]) row++;
        else col--;
    }
    return false;
}


int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    searchElement(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}