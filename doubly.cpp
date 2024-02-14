#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"MEMORY FREE FOR DATA"<<value;
    }
};
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
int getlen(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return  len;
}
void inbegin(Node *&head,Node* &tail,int d)
{  if(head==NULL){
    Node *temp=new Node(d);
    head=temp;
    tail=temp;
    }
    else{
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertend(Node *&tail,Node*&head,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }

}
void inpos(Node *head,Node *tail,int pos,int d){
    if(pos==1){
        inbegin(head,tail,d);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    //inserting att last node
    if(temp->next==NULL){
        insertend(tail,head,d);
        return;
    }
    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    cout<<"THe element inserted atpostion"<<" "<<pos<<endl;
}
void dele(int pos,Node*&head){
    if(pos==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp; 
    }
    //deleting the node at any given position
    else{
        Node *curr=head;
        Node *prev=NULL;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
    }

}
int main(){
    Node* n1=new Node(10);
    Node *head=n1;
    Node *tail=n1;
    inbegin(head,tail,90);
    inbegin(head,tail,89);
    inbegin(head,tail,56);
    inbegin(head,tail,45);
    inbegin(head,tail,23);
    insertend(tail,head,67);
    insertend(tail,head,42);
    insertend(tail,head,47);
    insertend(tail,head,43);
    inpos(head,tail,2,578);
    dele(6,head);
    print(head);
    cout<<getlen(head);
}