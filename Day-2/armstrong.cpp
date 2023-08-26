#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void number(int n){
    int i=0;
    int original=n;
     //i=number of digits
    while(n>0){
        n=n/10;
        i++;
    }
    //we will create a empty array of size i
    int a[i];
    int temp=original;
    int digit;
    for(int j=0;j<i;j++){
        digit=temp%10;
        a[j]=digit;
        temp=temp/10;
    }
    int num=0;
    for(int j=0;j<i;j++){
        num=num+pow(a[j],i);
    }
    if(num==original)
    {
        cout<<" the number is an armstrong number";

    }
    else{
        cout<<"the number is not an armstrong number";
    }


}

int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    number(n);

    return 0;
}