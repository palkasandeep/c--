#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
Node *front=0;
Node *rear=0;
void enque(int d){
    Node* newnode=new Node(d);
    newnode->data=d;
    newnode->next=NULL;
    if(rear==NULL || front==NULL){
        front =rear=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void deque(){
    Node *temp;
    temp=front;
    if(front==NULL){
        cout<<"under flow condtion";
    }
    else if(front==rear){
        front=rear=NULL;
        delete temp;
    }
    else{
        front=front->next;
        rear->next=front;
        delete temp;
    }
}


void print(){
  Node *temp;
  temp=front;
  if(rear==NULL && front==NULL){
    cout<<"The linked list is empty"<<endl;
  }
  else{
    while(temp->next!=front){
        cout<<temp->data<<""<<endl;
        temp=temp->next;

    }
    cout<<temp->data;
  }
}
int main(){
enque(67);
enque(56);
enque(56);
enque(89);

print();

 
}