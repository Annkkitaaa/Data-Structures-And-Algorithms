
#include<bits/stdc++.h>

using namespace std;
int rotate(int arr[], int n)
{ int temp=arr[0];
   for(int i=0;i<n;i++){
    arr[i]=arr[i+1];
   }

   arr[n-1]=temp;
  
  return n;
}
int main() {
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = rotate(arr, n);
  cout << "The array after rotation is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}
