#include <bits/stdc++.h>
using namespace std;

void search(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
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
    int x=6;
    int Nums[] = {1,2,4,7};
    int n=sizeof(Nums)/sizeof(Nums[0]);
    search(Nums,n,x);
    return 0;
}