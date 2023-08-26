#include<bits/stdc++.h>
using namespace std;

void number(int n){
    if (n==1){
        cout<<" n is not prime";
    }
    else if(n==2 ){
        cout<<"n is prime";
    }
    else{ 
        bool isPrime = true; 
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;  
                break;
            }
        }
        if (isPrime) {
            cout << "n is prime";
        } else {
            cout << "n is not prime";
        }
    

        }
        }



int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    number(n);

    return 0;
}