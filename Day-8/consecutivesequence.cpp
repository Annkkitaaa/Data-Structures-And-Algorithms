#include <bits/stdc++.h>
using namespace std;

//set data structure can also be used

int Sequence(vector<int> arr){
    sort(arr.begin(),arr.end());
    int maxlength=1;
    int j=1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i-1]+1==arr[i]){
            j++;
            if(maxlength<j){
                maxlength=j;
            }
        }
        else{
            j=1;
        }

    }
    return maxlength;

}





int main()
{
    vector<int> arr = {100,200,1,3,2,4};
   int ans=Sequence(arr);
   cout<<ans;
    return 0;
}