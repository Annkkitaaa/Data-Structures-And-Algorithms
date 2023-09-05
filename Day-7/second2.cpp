#include<bits/stdc++.h>
using namespace std;

void secondsmallest(int a[],int n){
    if(n<2) {
        cout<<"there is no second smallest element. ";
        return;
    }
    int small=INT_MAX;
    int second_small=INT_MAX;
    int i;
    for(i=0;i<n;i++){
        if(small>a[i]){
            second_small=small;
            small=a[i];
        }
        else if(a[i]<second_small && a[i]!=small){
            second_small=a[i];
        }
    }
    cout<<second_small;
}

void secondlargest(int a[],int n){
    if(n<2) {
        cout<<"there is no second largest element.";
        return;
    }
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
            second_largest=largest;
        }
        else if(a[i]>second_largest && a[i]!=largest){
            second_largest=a[i];
        }
    }
    cout<<second_largest;
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
    secondsmallest(a,n);
    cout<<endl;
    secondlargest(a,n);


    return 0;
}