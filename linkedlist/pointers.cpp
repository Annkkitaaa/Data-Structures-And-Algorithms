#include<bits/stdc++.h>
using namespace std;

int main(){
    string food="apple";
    string* ptr=&food;
    cout<<food<<" "<<*ptr<<endl;  //dereferencing
    cout<<ptr<<" "<<&food; //referencing
}