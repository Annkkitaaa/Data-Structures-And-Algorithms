#include <bits/stdc++.h>
using namespace std;

void upperBound(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<ans;

}

int main(){
    int x=2;
    int Nums[] = {1,2,2,3};
    int n=sizeof(Nums)/sizeof(Nums[0]);
    upperBound(Nums,n,x);
    return 0;
}