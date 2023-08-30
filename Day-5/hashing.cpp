#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];

    //input the array
    cout<<"enter the size of array: ";
    int n;
    cin>>n;
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
     //hash array
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    
    //enter the query
    
    int q;
    cout<<"enter the number of queries: ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number];
} 
    return 0;
}