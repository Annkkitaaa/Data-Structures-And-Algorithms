#include<bits/stdc++.h>
using namespace std;

void isPalindrome(string S){
    string P=S;
    reverse(P.begin(),P.end());
    if(S==P){
        cout<< "yes";
    }
    else{
        cout<<"no";
    }
    }


int main(){
    string S;
    cout<<" enter the string ";
    cin>>S;
    isPalindrome(S);
    return 0;
}