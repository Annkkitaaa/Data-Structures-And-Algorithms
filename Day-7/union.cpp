
#include<bits/stdc++.h>
using namespace std;

//map and set can also be used in place of using pointers

void arrayUnion(int a1[],int m,int a2[],int n){
    vector<int> U;
    
    int left=0;
    int right=0;
    while(left<m && right<n){
        if(a1[left]<a2[right]){
            U.push_back(a1[left]);
            left++;
        }
        else if(a1[left]>a2[right]){
            U.push_back(a2[right]);
            right++;
        }
        else{
            U.push_back(a1[left]); //hadnle duplicates
            left++;
            right++;
            // Skip the duplicates in both arrays
            while (left < m && a1[left] == a1[left - 1]) {
                left++;
            }
            while (right < n && a2[right] == a2[right - 1]) {
                right++;
            }
        }
    }

    // If there are any remaining elements in a1 or a2
    while (left < m) {
        U.push_back(a1[left]);
        left++;
    }
    while (right < n) {
        U.push_back(a2[right]);
        right++;
    }

    for(auto it: U){
        cout<<it<<" ";
    }

    }



int main() {
    
  int a1[]={1,2,3,4,5};
  int a2[]={2,3,4,4,5};
  int m = sizeof(a1) / sizeof(a1[0]);
  int n = sizeof(a2) / sizeof(a2[0]);
  arrayUnion(a1,m,a2,n);
  return 0;
}

