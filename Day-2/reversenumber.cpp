#include<bits/stdc++.h>
using namespace std;

void number(int n){
    while(n>0){
        int digit=n%10;
        cout<<digit;
        n=n/10;
    }

}

int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    number(n);

    return 0;
}