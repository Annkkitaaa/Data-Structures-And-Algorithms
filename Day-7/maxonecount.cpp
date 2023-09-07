#include<bits/stdc++.h>
using namespace std;



void maxOne(int a[],int n){
    int max=0;
    int max_count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            max++;
            if(max_count<=max){
                max_count=max;
            }
        }
        else if(a[i]==0){
            max=0;
        }
    }
    cout<<max_count;

}


int main(){

int a[]={1,1,0,1,1,1,0,0,1,1,1,1,1};
int n=sizeof(a)/sizeof(a[0]);
maxOne(a,n);


    return 0;
}
