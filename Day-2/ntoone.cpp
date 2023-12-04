#include<bits/stdc++.h>
using namespace std;

void name(int i,int n){
    if(i<=0) return;
    else cout<<i;
    cout<<endl;
    name(i-1,n);
    
}

int main(){
    int n;
    cin>>n;
    name(n,n);
    return 0;
}