#include<bits/stdc++.h>
using namespace std;
//to find the rth row and cth column element in pascal's triangle

void com(int n, int r){
    long long res=1;

    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    
   

    cout<<"the rth row and nth element is:"<<res;
}

int main(){
   cout<<" enter the row: ";
   int n;
   cin>>n;
   cout<<" enter column: ";
   int r;
   cin>>r;
   com(n-1,r-1);
}