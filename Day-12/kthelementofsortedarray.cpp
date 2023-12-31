#include <bits/stdc++.h>
using namespace std;

int kTH(vector<int> a, vector<int> b,int k){
    int n1=a.size();
    int n2=b.size();
    int left=k;

    if(n1>n2) return kTH(b,a,k);
    int n=n1+n2;

    int low=max(k-n2,0);
    int high=min(k,n1);
    while(low<=high){
        int mid1=(low+high)/2;
        int mid2=k-mid1;

        int l1=INT_MIN ,l2=INT_MIN;
        int r1=INT_MAX, r2=INT_MAX;

        if(mid1<n1) r1=a[mid1];
        if(mid2<n2) r2=b[mid2];
        if(mid1-1>=0) l1=a[mid1-1];
        if(mid2-1>=0) l2=b[mid2-1];
        
        if(l1<r2 && l2<r2 ){
            if(n%2==1) return max(l1,l2);
            
        }
        else if (l1>r2) high=mid1-1;
        else low=mid1+1;
    }
    return 0;
}

int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    int k=3;
    cout << "The kth element of two sorted array is " << fixed << setprecision(1)
         << kTH(a,b,k) << '\n';
}
