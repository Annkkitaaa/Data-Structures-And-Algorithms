#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cout<<"Enter the row number to be printed: ";
    cin>>r;
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<r;i++){
        ans=(r-i)*ans;
        ans=ans/i;
        cout<<ans<<" ";

    }
}