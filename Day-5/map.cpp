#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<" enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre compute
    //map keeps everything in sorted order
    //for character hashing we can create a map of the type<char,int>
    map<int ,int > mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
     
    //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cout<<" enter the number of queries: ";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<< mpp[num]<<endl;

    }
   

    return 0;
}