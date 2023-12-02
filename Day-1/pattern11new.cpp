#include<bits/stdc++.h>
using namespace std;

void pattern11(int n){
    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
        if(i%2==0){
            if(j%2==0){
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
        else{
             if(j%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }

        }
        cout<<endl;
         
        
    }

    
}

int main(){
    int n;
    cin>>n;
    
    pattern11(n);
    return 0;
}