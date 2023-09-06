#include<bits/stdc++.h>
using namespace std;

void zero(int a[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            a[i]=a[j];
            i++;
        }
    }

    for(int j=i;j<n;j++){
        a[j]=0;
    }
     
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
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
    zero(a,n);


    return 0;
}