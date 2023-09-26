#include<bits/stdc++.h>
using namespace std;

//to find an element which appears more than n/3 times in an array
void majorityElement(int arr[],int n){
    map<int,int> mp;
    int majority;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    float t=n/3;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>t){
        majority=arr[i];
    }
    }

cout<<majority;
}
int main(){

    int arr[]={1,2,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    majorityElement(arr,n);
    

    return 0;

}
