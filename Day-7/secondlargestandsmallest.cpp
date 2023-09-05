#include<bits/stdc++.h>
using namespace std;

void sort(int a[],int n){  
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
        }
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

    cout<<"the second smallest element is " <<a[1]<<endl;
    cout<<"the second largest element is "<< a[n-2];

    return 0;
}