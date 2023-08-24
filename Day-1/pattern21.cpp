#include<bits/stdc++.h>
using namespace std;

void p21(int n){
    for(int i=0;i<n;i++){
        if(i==0 or i==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
            }}
        else{
            for(int j=0;j<n;j++){
                if(j==0 or j==n-1){
                   cout<<"*"; 
                }
                else{
                    cout<<" ";
                }
            }
        }cout<<endl;
        }
      
       }
       
    
    



int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    p21(n);

}
