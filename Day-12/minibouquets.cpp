
#include <bits/stdc++.h>
using namespace std;

bool ifPossible(int arr[],int day,int m, int k,int n){
    
    int numberofbouquets=0;
    int total=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=day){
            count++;
        }
        else{
            numberofbouquets+=count/k;
            count=0;
        }
    
    numberofbouquets+=(count/k);

    
    if(numberofbouquets>=k) return true;
    else return false;

}}

int roseGarden(int arr[],int k,int m,int n){

    int val=k*m;
    if(val>n) return -1; //impossible case
   
    int low=INT_MAX;
    int high=INT_MIN;
    for(int i=0;i<n;i++){
        low=min(arr[i],low);
        high=max(arr[i],high);
        }
    while(low<=high){
        int mid=(low+high)/2;
        if(ifPossible(arr,mid,m,k,n)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    
}

int main()
{
    int arr[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m,n);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}
