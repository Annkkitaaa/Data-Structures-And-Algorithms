#include<bits/stdc++.h>
using namespace std;

void ReverseS(string s){
    int n=s.length();
    s+=" ";
    stack<string> st;
    string str="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            st.push(str);
            str="";        }
        else{
            str+=s[i];
        }
    }
    string ans="";
   while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();
   

    cout<<ans;
}


int main(){
    string s="Life is hard";
    ReverseS(s);
    return 0;
}