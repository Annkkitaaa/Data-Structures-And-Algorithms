
#include <bits/stdc++.h>
using namespace std;

vector<int> leaderelement(vector<int> arr,int n){
    vector<int> LE;
    int max=arr[n-1];
    LE.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            LE.push_back(max);
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
