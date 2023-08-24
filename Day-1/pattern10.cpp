#include<bits/stdc++.h>
using namespace std;

void p1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
     
        cout<<endl;
   
    }
}

void p2(int n){
   for(int i=0;i<n;i++)
        { 
            for(int j=n-i;j>0;j--)
            {
                cout<<"*";
            }
            
            cout<<endl;
         }
}

void pattern10(int n){
    p1(n);
    p2(n);
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    pattern10(n);

}