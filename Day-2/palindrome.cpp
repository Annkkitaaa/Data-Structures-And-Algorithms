#include<bits/stdc++.h>
using namespace std;

void number(int n){
    int original=n;
    int t=0;
    while(n>0){
        int digit=n%10;
      
        t=t*10+digit;
        n=n/10;
    }
    cout<<t<<endl;
    if(t==original){
        cout<<"the number is a palindrome";
    }
    else{
        cout<<"the number is not a palindrome ";
    }

}

int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    number(n);
    

    return 0;
}