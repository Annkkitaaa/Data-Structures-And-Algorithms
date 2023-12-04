#include<bits/stdc++.h>
using namespace std;

class Myclass {
    public:        //access specifier
       int m;      // m attribute
       string s;   //s attribute
};

int main(){
    Myclass obj1;
    obj1.m=5;
    obj1.s="s";

    cout<<obj1.m;
    cout<<endl;
    cout<<obj1.s;
    return 0;
}