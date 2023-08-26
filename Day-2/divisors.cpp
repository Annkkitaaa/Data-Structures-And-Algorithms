#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void divisor(int n){
    int i;
     cout<<"the divisors of "<<n<<"are :"<<endl;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }


}

int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    divisor(n);

    return 0;
}