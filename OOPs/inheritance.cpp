#include<bits/stdc++.h>
using namespace std;

class fruits{
    public:
        string a1="apple";
};

class f1:public fruits{
    public:
        string a2="red";
};

int main(){
    f1 x;
    cout<<x.a2<<x.a1;
    return 0;
}