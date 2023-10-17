#include <bits/stdc++.h>
using namespace std;

int MaxElement(vector<vector<int>> mat,int m, int n,int mid){
    int low=0;
    int high=m-1;
    
    while(low<=high){
        int mid2=(low+high)/2;
        if (mid2 > 0 && mid2 < m - 1){
        if(mat[mid2][mid]>mat[mid2-1][mid] && mat[mid2][mid]>mat[mid2+1][mid]){
           
            return mid2;
        }}
        if(mat[mid2][mid]>mat[mid2+1][mid]){
            high=mid2-1;

        }
        else{
            low=mid2+1;
        }
        
    
    }

    return -1;

}
void peakElement(vector<vector<int>> mat,int m, int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(high+low)/2;
        int row=MaxElement(mat,m,n,mid);
        int left=mid-1>=0 ? mat[row][mid-1]: -1;
        int right=mid+1<n ? mat[row][mid+1]: -1;
        if(mat[row][mid]>left && mat[row][mid]>right){
            cout<<"("<<row<<","<<mid<<")";
            return;
            }
        else if (mat[row][mid]<left) high=mid-1;
        else low=mid+1;

    }
    cout << "No peak element found." << endl;


}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19},
        {3, 6, 9, 8, 22}, {10, 13, 1, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int m=matrix.size();
    int n=matrix[0].size();
    peakElement(matrix,m,n);
    return 0;
    }
