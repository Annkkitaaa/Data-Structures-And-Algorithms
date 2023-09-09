#include<bits/stdc++.h>
using namespace std;


void f(int a[],int n,int t){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=a[i];
        int moreNeeded =t-num;
        if(mpp.find(moreNeeded)!=mpp.end()){
            cout<< mpp[moreNeeded]<<","<<i;

        }
        mpp[num]=i;
    }

    cout<<"{-1,1}";

        
}
    



int main(){
    int t=15;

int a[]={2,6,5,8,11};
int n=sizeof(a)/sizeof(a[0]);
f(a,n,t);


    return 0;
}
