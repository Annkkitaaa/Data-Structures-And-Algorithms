// using a stack
Node* reversedll(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* temp=head;
    stack<int> st;
    while(temp!=NULL){
         st.push(temp->data)
         temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop;
        temp=temp->data;
    }
}

//using one iteration

Node* reversed(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* last=NULL;
    Node* current=head;
    while(current!=NULL){
        last=current->back;
        current->back=current->front;
        current->front=last;
        current=current->back;
    }
    return h
}