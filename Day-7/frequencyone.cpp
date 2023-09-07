#include<bits/stdc++.h>
using namespace std;



void f(int a[],int n){
    map<int ,int> p;
    for(int i=0;i<n;i++){
        p[a[i]]++;
    }
    for(auto it: p){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }

}


int main(){

int a[]={2,2,3,4,4,5,5};
int n=sizeof(a)/sizeof(a[0]);
f(a,n);


    return 0;
}
