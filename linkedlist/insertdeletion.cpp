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

Node* insertatHead(Node* head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
    
}

Node* insertbeforevalue(Node* head,int value , int data){
    if(head==NULL){
         return NULL;
    }
    if(head->data==value){
        Node* n1=new Node(data);
        n1->next=head;
        head=n1;

    }
    else{
        Node* temp=head;
        while(temp->!=NULL){
            
            if(temp->next->data==value){
                Node* n1=new Node(data);
                n1->next=temp->next;
                temp->next=n1;
                break;
            }

            temp=temp->next;
        }

    }
    return head;
}

Node* insertatKthposition(Node* head,int k , int data){
    if(head==NULL){
        if(k==1) return new Node(data);
        else return NULL;
    }
    else{
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            if(count=(k-1)){
                Node* n1=new Node(data);
                n1->next=temp->next;
                temp->next=n1;
                break;
            }
            temp=temp->next;
        }

    }
    return head;
}

Node* insertatTail(Node* head, int data){
    if(head==NULL) return new Node(data);
    Node* temp=head;
    Node* t2=new Node(data);
    while(temp->next!=NULL){
          temp=temp->next;
    }
    temp->next=t2;

}

Node* removesHead(Node* head){
    if(head==NULL ) return head;
    Node* temp=head;
    head= head->next;
    delete temp;
    return head;
}

Node* deleteHead(Node* head){
    Node* temp;
    head=head->next;
    free(temp);  //delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head== NULL || head->next==NULL) return NULL;
    //either the linked list empty or has only one element
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
        
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}
Node* deletevalue(Node* head, int value){
    if(head==NULL) return head;
    if(head->data==value){
        Node* temp=head;
        head=head->next;
        
        free(temp);
        return head;
        
    }
    else{
        
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
            
            if(temp->data==value){
                prev->next=prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
            
        }

    }

    return head;
}

Node* deleteKthposition(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        
        free(temp);
        return head;
        
    }
    else{
        int count=0;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
            count++;
            if(count==k){
                prev->next=prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
            
        }

    }

    return head;
}

int main(){
    Node* n1=new Node(2);
    Node* head=n1;
    
    Node* n2=new Node(3);
    head->next=n2;

    Node* n3= new Node(4);
    n2->next=n3;

    Node* n4= new Node(6);
    n3->next=n4;

    Node* t1=insertatHead(head,18);
     while(t1!=NULL){
        cout<<t1->data<<" ";
        t1=t1->next;
    }
    
    cout<<endl;
    
    Node* temp1=deleteHead(head);
    while(temp1!=NULL){
        cout<<temp1->data;
        temp1=temp1->next;
    }
    cout<<endl;
    Node* temp2=deleteKthposition(head,2);
    while(temp2!=NULL){
        cout<<temp2->data;
        temp2=temp2->next;
    }

    return 0;
}