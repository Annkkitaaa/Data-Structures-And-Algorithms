
#include<bits/stdc++.h>
using namespace std;

int main(){
    //pairs
    pair<int,int> p={1,2};
    cout<<p.second;
    cout<<"yes";

    //vectors
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    
    vector<int> v(5); //vector of size 5
    vector<int> v(5,20); //vector of size 5 with each element equal to 20
    
    //iterator
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    vector<int>::iterator it=v.begin(); //it points to the memory where the element is stored
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";
     
    vector<int>::iterator it=v.end(); //this points at the memory location just after the last element
    it--; //this will point at the last element of v
    vector<int>::iterator it2=v.rend(); //will be pointing to memory address just before the first element
    vector<int>::iterator it3=v.rbegin();//will be pointing to the last element
    //it++ in case of reverse end and begin move in reverse order
    cout<<v.back()<<" ";

    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";

    }

    for(auto it: v){
        cout<<it<<" ";

    }

    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4); //will erase range of values
    
    //insert function

    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(),300);  //{300,100,100}
    v.insert(v.begin()+2,2,200);  //{300,100,200,200,100}
     
    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());
    
    //{10,20}
    cout<<v.size(); //2

    //LIST

    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);  //{5,2,4}
    ls.emplace_front(2); //{2,5,2,4}

    //DEQUE

    deque<int> dq;
    dq.push_back(1); // {1};
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}
    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}
    dq.back();
    dq.front();

    //STACK last in first out

    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top();  //prints 5
    st.pop(); //removes the top element and stack now looks like {3,3,2,1}
    cout<<st.size(); //4
    cout<<st.empty();
     stack<int>st1 ,st2;
     st1.swap(st2);

     //QUEUE

     queue<int> q;
     q.push(1); //{1}
     q.push(2);  //{1,2}
     q.emplace(4); //{1,2,4}

     q.back() +=5;
     cout<<q.back(); //prints 9
     cout<<q.front(); //prints 1
     q.pop(); //{2,9}
     cout<<q.front(); //prints 2

    //PRIORITY QUEUE

    priority_queue<int> pq;
   pq.push(5); //{5};
   pq.push(2); //{5,2}
   pq.push(8); //{8,5,2}
   pq.emplace(10); //{10,8,5,2}

   cout<<pq.top(); //prints 10
   pq.pop();  //{8,5,2}

   //SET
   //everything is sorted and everything is unique

   set<int> st;
   st.insert(1); //{1}
   st.emplace(2); //{1,2}
   st.insert(2); //{1,2}
   st.insert(4); //{1,2,4}
   st.insert(3); //{1,2,3,4}

   //find,count and erase are important functions
   auto it=st.find(3);

   //lower and upper bound
   auto it=st.lower_bound(2);
   auto it=st.upper_bound(3);

   //multiset
   //everything same as that of set but it also includes multiple occurances
   multiset<int> ms;
   ms.insert(1); //{1}
   ms.insert(1); //{1,1}
   ms.erase(1);  //all the 1's are erased 
   

    



    return 0;
}

