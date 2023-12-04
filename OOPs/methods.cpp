#include<bits/stdc++.h>
using namespace std;

//fucntion defined inside class is called method and variables are attributes

class MyObject{
    public:
        int first;
        int second;
    void method(){
        cout<<"apple";
    }
    int sum(int first,int second){
        int x=first+second;
        return x;
    }
};



int main(){
    MyObject m;
    m.method();
    cout<< m.sum(5,6);
    return 0;
}