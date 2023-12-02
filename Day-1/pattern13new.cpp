#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
        cout<<start;
        start=start+1;
        
        }
        cout<<endl;
        
    }

    
}

int main(){
    int n;
    cin>>n;
    
    pattern8(n);
    return 0;
}