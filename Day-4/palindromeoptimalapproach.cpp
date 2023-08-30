#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string S){
    int n=(S.length()/2);
    for(int i=0;i<n;i++)
    {
        if(S[i]!=S[n-i-1]){
            return "no";
        }
    }
    return "yes";
    }


int main(){
    string S;
    cout<<" enter the string ";
    cin>>S;
    cout<<isPalindrome(S);
    return 0;
}