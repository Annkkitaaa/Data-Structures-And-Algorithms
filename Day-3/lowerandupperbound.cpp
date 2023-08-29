#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(10);

    int ind=lower_bound(v,v+6,1)-v;
    cout<<ind;

    int ind1=lower_bound(v.begin(),v.end(  ),2)-v.begin();
    cout<<ind1;
    

    return 0;
}