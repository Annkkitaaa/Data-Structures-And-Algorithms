#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



Node* arraytoLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* n1=new Node(arr[i]);
        temp->next=n1;
        temp=n1;
        }
    return head;
}

int main(){
    vector<int> arr={1,2,3,4,4,8,9,9};
    
    Node* head=arraytoLL(arr);

    Node* temp=head; //never change the head
    int count=0;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<count;
    
  
    return 0;
}