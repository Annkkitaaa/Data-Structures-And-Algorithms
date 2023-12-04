#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value= this-> data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<" memory is free for node with data" <<value<<endl;
    }

};
//we have taken reference because we don't want to create new copy
void InsertAtHead(Node* &head, int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtPosition(Node* tail,Node* head,int position, int d){
   //inserting at first position
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int count=1;
    while(count<position -1){
        temp=temp->next;
        count++;
    }

    //inserting at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void InsertAtTail(Node* &tail,int d)
{
    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;
}

void deleteNode(int position,Node* &head){
    //delete first node
     if(position==1){
      Node* temp=head;
      head=head->next;
      delete temp;
     }
     else{

    //delete any middle node or last node
     
     }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

int main(){
   
    Node* node1= new Node(5);
    cout<<node1->data <<endl;
    cout<<node1-> next<<endl;
     
    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    InsertAtHead(head,10);
    InsertAtHead(head,15);
    InsertAtPosition(tail,head,2,20);
    print(head);
    return 0;
}