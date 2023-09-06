#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,1,2,3,4,5,5,5,6,6,6,7};
    int t=sizeof(a)/sizeof(a[0]);
    int temp[t];
    temp[0]=a[0];
    int j=1;
    for(int i=1;i<t;i++){
        if(a[i-1]!=a[i]){
           temp[j]=a[i];
           j++;
           continue;
        }
    }

    for(int i=0;i<j;i++){
        cout<<temp[i]<<" ";
    }
   
    return 0;
}