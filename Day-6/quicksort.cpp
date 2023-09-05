#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr,int low ,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            int temp;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }

    int temp1;
    temp1=pivot;
    pivot=arr[j];
    arr[j]=temp1;

    return j;
}

void qS(vector<int> &arr,int low,int high){
    if(low<high){ //this means that there is more than one element
    int partition=f(arr,low,high);
    qS(arr,low,partition-1);
    qS(arr,partition+1,high);
    }
}

void quickSort(vector<int> &arr,int n){
    qS(arr,0,n-1);
}


int main(){
    int n;
    cout<<"Enter the number of elements in the array to be sorted: ";
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter an integer to be added: ";
        cin >> element;
        a[i] = element;
    }

    cout<<endl;
    quickSort(a,n);

    cout<<" sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}