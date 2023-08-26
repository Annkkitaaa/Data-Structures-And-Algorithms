#include<bits/stdc++.h>
using namespace std;

void number(int n){
    int i=0;
    if(n==0){
    i=1;
    }
    else{
    while(n!=0){
       n=n/10;
       i=i+1;
    }}
    cout<<i;

}

int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    number(n);

    return 0;
}