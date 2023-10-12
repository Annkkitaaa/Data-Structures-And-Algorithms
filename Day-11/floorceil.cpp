#include <bits/stdc++.h>
using namespace std;

void floorF(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans =-1;

    while (low <= high) { 
        int mid = (low + high) / 2;
        if (arr[mid] <= x) {
            ans = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "floor value: " <<ans<<endl;
}

void ceilF(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) { 
        int mid = (low + high) / 2;
        if (arr[mid] >=x) {
            ans = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout <<"ceil value: "<<ans;
}

int main() {
    int x = 5;
    int Nums[] = {3,4,4,7,8,10};
    int n = sizeof(Nums) / sizeof(Nums[0]);
    floorF(Nums, n, x);
    ceilF(Nums, n, x);
    return 0;
}
