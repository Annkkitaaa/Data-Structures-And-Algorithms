#include <bits/stdc++.h>
using namespace std;
//return 1 if==m
//return 0 if<m
//return 2 if>m



int funcProduct(int mid,int n, int m){
    int ans=1;
    for(int i=0;i<n;i++){
        ans=ans*mid;
    }

    if(ans==m) return 1;
    if(ans>m) return 2;
    if(ans<m) return 0;
}

int NthRoot(int n,int m){
    int low=1;
    int high=m;
    
    while(low<=high){
        int mid=(low+high)/2;
        int nmid=funcProduct(mid,n,m);
        if(nmid==1){
            return mid;
        }
        else if(nmid==2) high=mid-1;
        else low=mid+1;
        
    }

    return -1;
}
int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}