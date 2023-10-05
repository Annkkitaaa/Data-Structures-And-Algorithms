#include<bits/stdc++.h>
using namespace std;

void maxProduct(int arr[],int n){
    int maxP=INT_MIN;
    int pre=1;
    int suff=1;
for(int i=0;i<n;i++){
    if (pre==0) pre=1;
    if (suff==0) suff=1;
    pre=pre*arr[i];
    suff=suff*arr[n-i-1];
    maxP=max(pre,suff);

    }

cout<<maxP; 
}

int main(){
    int Nums[] = {1,2,-3,0,-4,-5};
    int n=sizeof(Nums)/sizeof(Nums[0]);
    maxProduct(Nums,n);
    return 0;
}