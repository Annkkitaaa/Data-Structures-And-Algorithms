#include<bits/stdc++.h>
using namespace std;



void missing(int a[],int N){
    int S1;
    S1=N*(N+1)/2;
    int S2=0;
    for(int i=0;i<N-1;i++){
        S2=S2+a[i];
    }
    int m=S1-S2;
    cout<<"the missing number is : "<<m;


   

}


int main(){

int a[]={1,2,3,5};
int N=5;
missing(a,N);


    return 0;
}