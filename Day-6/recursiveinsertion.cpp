#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> &arr,int i,int n){
    if(n==i) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    

    insertion(arr,i+1,n);
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
    insertion(a,0,n);

    cout<<" sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}