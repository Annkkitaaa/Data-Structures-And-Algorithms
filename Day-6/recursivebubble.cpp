#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr,int n){
    if(n==1) return;

    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    bubble(arr,n-1);
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
    bubble(a,n);

    cout<<" sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}