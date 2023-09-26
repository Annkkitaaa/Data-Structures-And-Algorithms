#include<bits/stdc++.h>
using namespace std;

vector<int> rthRow(int r){
    long long ans=1;
    vector<int> v;
    v.push_back(1);
    for(int i=1;i<r;i++){
      ans=ans*(r-i);
      ans=ans/i;
      v.push_back(ans);
    }

    for(auto it: v){
        cout<<it<<" ";
    }
    
}

int main(){
    int n;
    cout<<" enter the size of triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        rthRow(i);
        cout<<endl;

    }
}