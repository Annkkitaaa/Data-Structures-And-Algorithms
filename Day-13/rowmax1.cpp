#include <bits/stdc++.h>
using namespace std;
int MaxOneCount(vector<vector<int>> &matrix,int m,int n){
   
    int rowno=0;
    int maxn=INT_MIN;
    for(int i=0;i<m;i++){
         int count=0;
        for(int j=0;j<n;j++){
            if(matrix[i][j]==1){
                count++;
            }
        }
        if(maxn<=count){
          maxn=count;
          rowno=i;
        }

    }

    return rowno;
}

int main()
{
    vector<vector<int>> matrix = {{1, 0, 0}, {0, 1, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<
         MaxOneCount(matrix,m,n) << '\n';
  return 0;
}