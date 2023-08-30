#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    //base condition
    if(n==0) return 0;
    if(n==1) return 1;
    
    //recursive cases
    int last=fibonacci(n-1);
    int secondlast=fibonacci(n-2);
    return last+secondlast;

    
    }


int main(){
    int n;
    cout<<" enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++){

    cout<<fibonacci(i)<<" ";
    }
    return 0;
}