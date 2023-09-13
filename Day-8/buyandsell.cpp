#include <bits/stdc++.h>
using namespace std;




int f(vector<int> &arr) {
    int maxpro=0;
    int min_value=INT_MAX;
    int n=arr.size();
    for(int i=0;i<n;i++){
       
            min_value=min(arr[i],min_value);
            maxpro=max(maxpro,arr[i]-min_value);
        
    }

    return maxpro;

  
  
    
}

int main()
{
    vector<int> arr = {7,1,5,3,5,4};
    int ans = f(arr);
    cout << "The max attainable profit is: " << ans << endl;
    return 0;
}
