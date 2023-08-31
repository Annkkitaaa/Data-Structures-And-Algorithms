#include<bits/stdc++.h>
using namespace std;

void sort(int a[],int n){  
    int key;
    for(int i=1;i<n;i++){
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   

}

int main(){
    int n;
    cout<<"Enter the number of elements in the array to be sorted: ";
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
    sort(a,n);

    return 0;
}