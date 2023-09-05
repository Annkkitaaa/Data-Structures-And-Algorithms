#include<bits/stdc++.h>
using namespace std;

int main{
    cout<<"enter the number of elements in array to be searched: ";
    int n;
    cin>>n;
    cout<<" enter the elements of the array :";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter the element to be searched: ";
    int k;
    cin>>k;

    //search

    for(int i=0;i<n;i++){
        if(k==a[i]){
            cout<<"the index at which element is present is: "<<i;

        }
        else{
            cout<<"element not present";
        }
    }
}