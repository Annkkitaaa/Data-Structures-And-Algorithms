#include <bits/stdc++.h>
using namespace std;

void Last(int arr[],int n,int x){
    int ans=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            ans=mid;
            low=mid+1;

        }
        else if(x<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<ans;
}


int main() {
    int x = 60;
    int Nums[] = {3,4,13,13,13,20,40};
    int n = sizeof(Nums) / sizeof(Nums[0]);
    Last(Nums, n, x);
   
    return 0;
}