#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    
    if (i>n) return;
    cout<<" Raj";
    f(i+1,n);
}

int main(){
    int n=4;
    f(1,n);
    return 0;
}