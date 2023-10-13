
#include <bits/stdc++.h>
using namespace std;

long long SquareRoot(int n){
    int low=1;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        long long val=mid*mid;
        if(val<=(long long)(n)){

            low=mid+1; //eliminate left end
        }
        else{
            high=mid-1; //eliminate right end
        }
    }
    return high;
}



int main()
{
    int n = 28;
    int ans = SquareRoot(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}