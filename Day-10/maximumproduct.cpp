#include<bits/stdc++.h>
using namespace std;

void maxProduct(int arr[],int n){
    int maxP=INT_MIN;
for(int i=0;i<n;i++){
    int ans=arr[i];
    for(int j=i+1;j<n;j++){
        ans=ans*arr[j];
        maxP=max(ans,maxP);

    }
}
cout<<maxP; 
}

int main(){
    int Nums[] = {1,2,-3,0,-4,-5};
    int n=sizeof(Nums)/sizeof(Nums[0]);
    maxProduct(Nums,n);
    return 0;
}