#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //formed the array
    int n;
    cout<<" enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the "<<n<<" array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //creating map
    int max=0;
    int min=n;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
        //finding the max and min f element
        if(i>=0 && mpp[a[i]]>max){
            max=mpp[a[i]];
        }
        if(i>=0 && mpp[a[i]]<min){
            min=mpp[a[i]];
        }
    }
    
    //printing the element with the higest and lowest frequency
    for(auto it: mpp){
        if(it.second==max){
            cout<<"the element with highest frequency is :"<<it.first<<endl;
        }
        if(it.second==min){
            cout<<"the element with the lowest frequency is :"<<it.first;
        }
    }

    
    return 0;
}