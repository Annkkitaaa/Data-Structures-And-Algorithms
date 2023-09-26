#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v){
    int n=v.size();
    int count1=0;
    int count2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<=n;i++){
    if(count1==0 && v[i]!=el2){
        count1++;
        el1=v[i];
    }
    else if(count2==0 && v[i]!=el1){
        count2++;
        el2=v[i];
    }
    else if(el1==v[i]) count1++;
    else if(el2==v[i]) count2++;
    else{
        count1--;
        count2--;
    }
    }

    vector<int> ls;
    count1=0;
    count2=0;
    for(int i=0;i<n;i++){
        if(el1==v[i]) count1++;
        if(el2==v[i]) count2++;

    }

    int mini =(int)(n/3)+1;
    if(count1>=mini) ls.push_back(el1);
    if(count2>=mini) ls.push_back(el2);
    sort(ls.begin(),ls.end());

    return ls;

   }

   int main(){

    vector<int> arr={2,2,1,3,1,1,3,1,1};
    vector<int> ans=majorityElement(arr);
    for(auto it:ans){
        cout<<it;
    }
    return 0;

}