
#include<bits/stdc++.h>

using namespace std;
int rotate(int a[], int n,int d)
{ int temp[d];
  for(int i=0;i<d;i++){
    temp[i]=a[n-d+i];
  }
  for(int i=n-1;i>=d;i--){
    a[i]=a[i-d];
  }

  for(int i=0;i<d;i++){
    a[i]=temp[i];
  }
  
  return n;
}
int main() {
  int d;
  cout<<"enter the number of places you want to right rotate the array: ";
  cin>>d;
  int a[] = {1,2,3,4,5};
  int n = sizeof(a)/sizeof(a[0]);
  int k = rotate(a, n,d);
  cout << "The array after rotation " << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
