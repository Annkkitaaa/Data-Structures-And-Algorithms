#include<bits/stdc++.h>
using namespace std;

void p16(int n){
    for(int i=0;i<n;i++){
        char start='A'+i;
        
        for(char ch ='A';ch<'A'+n-i;ch++){
            cout<<start;
        }
        
        cout<<endl;
    }
   
}



int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    p16(n);

}