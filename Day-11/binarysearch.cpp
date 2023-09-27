#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the element to be searched: ";
    cin >> k;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            cout << "Element found at index: " << mid << endl;
            break;
        } 
        else if (k > arr[mid]) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (low > high) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
