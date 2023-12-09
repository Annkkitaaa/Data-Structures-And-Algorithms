#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node* back;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->back=NULL;
    }
};

Node* insertbeforeHead(Node* head, int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->back=temp;
    head=temp;
    return head;
}

Node* insertbeforeTail(Node* head, int data)
{   if(head->next==NULL) return insertbeforehead(data);
    Node* temp=new Node(data);
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    temp->next=tail;
    temp->back=prev;

    prev->next=temp;
    tail->back=temp;
    
    return head;
}

Node* insertbeforekthelement(Node* head,int data,int k){
    if(k==1){
        return insertbeforeHead(head,data);

    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node* insert=new Node(data);
    prev=temp->back;
    insert->next=temp;
    insert->back=prev;
    prev->next=insert;
    temp->back=insert;
    return head;

}

void insertbeforeanode(Node* node,int data){
    Node* prev=node->back;
    Node* insert=new Node(data);
    insert->next=node;
    insert->back=prev;
    prev->next=insert;
    node->back=insert;
    
}
Node* arraytoDLL(int arr[],int n){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i]);
        temp->back=prev;
        prev->next=temp;
        prev=temp;
    }

    return head;
}

Node* deleteNodevalue( Node* temp){
    Node* prev =temp->back;
    Node* front=temp->next;
    if(front==NULL){
        temp->back=NULL;
        prev->next=NULL;
        delete temp;
        return;
    }

    prev->next=front;
    front->back=temp;
    temp->next=temp->back=NULL;
    delete temp;

}
Node* deleteatkthposition(Node* head,int k){
    if(head==NULL){
        return NULL;
    }

    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        if(count==k) break;
        temp=temp->next;
        count++;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL && front ==NULL){
       return NULL;;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else{
        return deletetail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;
}

Node* deletehead(Node* head){
    if (head==NULL || head->next ==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    head->back=NULL;
    temp->next=NULL;
    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if (head==NULL || head->next ==NULL){
        return NULL;
    }

    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    prev->next=NULL;
    tail->back=NULL;
    delete tail;
    return head;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    Node* head=arraytoDLL(arr,n);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    Node* temp1= deletehead(head);
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
    Node* temp2= deletetail(head);
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    return 0;
}