#include<iostream>
using namespace std;

void p11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0){
            start=0;
        }
        else{
            start=1;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
     
        cout<<endl;
   
    }
}



int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    p11(n);

}