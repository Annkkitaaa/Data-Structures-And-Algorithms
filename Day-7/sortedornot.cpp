#include<bits/stdc++.h>
using namespace std;

void ifsorted(int a[],int n){
    if(n<2){
        cout<<"sorted";
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cout<<"array not sorted";
            return;
        }
        
        }
        cout<<"sorted";
    }
    





int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    ifsorted(a,n);


    return 0;
}