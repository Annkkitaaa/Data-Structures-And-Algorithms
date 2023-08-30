#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter the string to be hashed: ";
    cin>>s;
    cout<<" enter the number of queries: ";
    int q;
    cin>>q;
    
    //hash array
    //here we just considered small characters. if there is no specification provided we have to create an array of size 256
    
    int hash[26]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    //input the query
    while(q--){
        char c;
        cin>>c;
        //return the value from hash array
        cout<<hash[c-'a']<<endl;
    }

    return 0;
}