#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

//traverses linked list

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}

//gives length of linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
        
    }

    return len;
}

void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;

    head->prev=temp;
    head=temp;
}

void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    temp->prev=tail;

    tail->next=temp;
    tail=temp;
}


int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    

    insertathead(head,11);
    insertathead(head,20);
    insertathead(head,33);
    insertathead(head,1);
    insertattail(tail,32);
    print(head);

}