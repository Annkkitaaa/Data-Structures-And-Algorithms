#include<bits/stdc++.h>
using namespace std;

string LargestOdd(string num){
    int n=num.size();
    for(int i=n-1;i>=0;i--){
        if((num[i]-'0')%2==1){
            return num.substr(0,i+1);
        }
    }
    return "";
}

int main(){
    string num="42072";
    string ans=LargestOdd(num);
    cout<<ans;
    return 0;
}