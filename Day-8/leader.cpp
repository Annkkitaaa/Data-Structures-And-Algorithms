
#include <bits/stdc++.h>
using namespace std;

vector<int> leaderelement(vector<int> arr,int n){
    vector<int> LE;
    int j;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
                }
            
        }
        if(leader){
                LE.push_back(arr[i]);
            }
    }

    return LE;
}
int main()
{
    vector<int> arr= {4,7,1,0};
    int n=arr.size();
    vector<int> ans = leaderelement(arr,n);

    cout << "The leader elements are : [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}
