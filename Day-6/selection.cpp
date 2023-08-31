#include<bits/stdc++.h>
using namespace std;

void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter the number of elements in the array to be sorted";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
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