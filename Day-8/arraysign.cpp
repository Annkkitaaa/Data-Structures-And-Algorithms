#include <bits/stdc++.h>
using namespace std;




void f(vector<int> &arr) {
    vector<int> pos;
    vector<int> neg;
    int n=arr.size();
   
    for(int i=0;i<n;i++){
        if(arr[i]>0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
        }
      
    

    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
    
}

int main()
{
    vector<int> arr = {1,2,-4,-5};
   f(arr);
    return 0;
}