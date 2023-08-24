#include<bits/stdc++.h>
using namespace std;

void p18(int n){
    for(int i=0;i<n;i++){
       char ch='A'+n-i-1;
       for(int j=0;j<=i;j++){
       cout<<ch;
       ch++;
       }
       
       cout<<endl;
    }
    }




int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    p18(n);

}
