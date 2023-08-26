#include<bits/stdc++.h>
using namespace std;

void gcd(int n1,int n2){
    //make sure n2 is less than n1 otherwise swap
    int temp;
    if(n2>n1){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    int hcf=1;
    
    //since we are considering every value between i and n2,the highest common divisor will be printed.
    for(int i=1;i<=n2;i++){
        if(n1%i==0 && n2%i==0){
        hcf=i;
        }
    }
    cout<<hcf;
    
    }

int main(){
    int n1,n2;
    cout<<"enter two numbers: ";
    cin>>n1>>n2;
    gcd(n1,n2);

    return 0;
}