#include<bits/stdc++.h>
using namespace std;
//printing number from N to 1 using recursion
void f(int i,int n){
    
    if (i<=1) return;
    cout<<i<<endl;
    f(i-1,n);
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    f(n,n);
    return 0;
}