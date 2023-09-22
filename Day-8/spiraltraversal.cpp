
#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> mat,int n, int m){
  int top=0;
  int left=0;
  int right=m-1;
  int bottom=n-1;
  vector<int> ans;
  while( top<=bottom && left<=right){
    //left to right
    for(int i=left;i<right;i++){
        ans.push_back(mat[top][i]);
      }
   top++;
    
    
    //top to bottom

    for(int i=top;i<=bottom;i++){
        ans.push_back(mat[i][right]);
     }
      right--;
    

    //right to left

    while(top<=bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(mat[bottom][i]);
        }
        bottom--;
        
    }

    //bottom to top

    if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(mat[i][left]);
            
        }
        left++;
    }

  }
  return ans;

} 



int main()
{
    vector<vector<int>> matrix = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } };
    int n = matrix.size();  //row
    int m = matrix[0].size(); //column
    vector<int> ans1 = spiral(matrix, n, m);

    cout << "The final output is : ";

        for (auto ele : ans1) {
            cout << ele << " ";
        }
        
    return 0;
}
