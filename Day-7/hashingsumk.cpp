#include<bits/stdc++.h>
using namespace std;

void subArray(int a[],int n,long long k){
    map<long long,int> preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
        int len=i-preSumMap[rem];
        maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
        preSumMap[sum]=i;}


    }
    cout<<"the max length of subarray with sum k is "<<maxLen;

}

int main(){
    int a[]={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    subArray(a,n,k);
    
    return 0;
}