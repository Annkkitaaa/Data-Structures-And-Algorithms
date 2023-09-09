#include<bits/stdc++.h>
using namespace std;

void subArray(int a[],int n,int k){
    
    int l=0;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
           
            sum+=a[j];
            if(sum==k){
                l=max(l,j-i+1);
            }
         }
        }
    
    cout<<"the max length of subarray with sum k is "<<l;

}

int main(){
    int a[]={1,2,3,1,1,1,1,4,2,3};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    subArray(a,n,k);
    
    return 0;
}