#include<bits/stdc++.h>
using namespace std;

void sum(int n){
     int s=0;
     for(int i=0;i<=n;i++){
        s=s+i;

     }
     cout<<s;
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    sum(n);
    return 0;
}