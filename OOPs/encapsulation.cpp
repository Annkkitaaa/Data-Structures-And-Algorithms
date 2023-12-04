#include<bits/stdc++.h>
using namespace std;

class My{
    private:
        int day;
    public:
        void setday(int x){
        day=x;
        }

        int getday(){
        return day;
        }
};

int main(){
    My obj;
    obj.setday(20);
    cout<<obj.getday();
    return 0;
}