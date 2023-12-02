#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
   
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+n-i;ch++){
        cout<<ch;
        
        
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