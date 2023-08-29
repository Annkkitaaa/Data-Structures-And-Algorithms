#include<bits/stdc++.h>
using namespace std;
//printing number from 1 to n  using recursion
void f(int i,int n){
    
    if (i>n) return;
    cout<<i<<endl;
    f(i+1,n);
}

int main(){
    int n;
    cout<<"enter the value of n: " ;
    cin>>n;
    f(1,n);
    return 0;
}