#include<bits/stdc++.h>
using namespace std;

void p20(int n){
      for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<n;i++){
         for(int j=n-i;j>0;j--){
            cout<<"*";
         }
         for(int j=1;j<=i;j++){
            cout<<" ";
         }
         for(int j=1;j<=i;j++){
            cout<<" ";
         }
         for(int j=n-i;j>0;j--){
            cout<<"*";
        
        }cout<<endl; 
        } 
       
   }  
    



int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    p20(n);

}
