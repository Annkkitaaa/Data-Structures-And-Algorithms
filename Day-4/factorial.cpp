#include<bits/stdc++.h>
using namespace std;

void f(int n){
     int s=1;
     for(int i=1;i<=n;i++){
        s=s*i;

     }
     cout<<s;
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    f(n);
    return 0;
}