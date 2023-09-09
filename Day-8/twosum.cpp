#include<bits/stdc++.h>
using namespace std;



void f(int a[],int n,int t){
    bool f=false;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if((a[i]+a[j])==t){
                cout<<"YES"<<endl;
                int arr[]={i,j};
                    cout<<"["<<arr[0]<<","<<arr[1]<<"]"<<endl;
                    f=true;
                    break;
                }
            
            }
        }
    if(f==false){
        cout<<"NO"<<endl;
        cout<<"[-1,1]"<<endl;

    }

        
}
    



int main(){
    int t=15;

int a[]={2,6,5,8,11};
int n=sizeof(a)/sizeof(a[0]);
f(a,n,t);


    return 0;
}
