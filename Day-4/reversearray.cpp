#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int n){
     int arr[20];
    for(int i=0;i<n;i++){
        arr[i]=a[n-i-1];
        }

     

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }


int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int a[20];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverse(a,n);
    return 0;
}