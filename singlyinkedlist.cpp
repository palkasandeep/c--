#include<bits/stdc++.h>
using namespace std;
class  Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
        cout<<"The deleted element is"<<value;
    }
};
void addbegin(Node *&head,int d){
    //create the node to insert the value
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void addtail(Node*  &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;


}
void addatpos(Node *&head,Node *&tail,int pos,int d){
    Node*temp=head;
    int count=1;
    if(pos==1){
        addbegin(head,d);
        return;
    }
    //inserting at last position
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        addtail(tail,d);
    }
    else{
        Node *node=new Node(d);
        node->next=temp->next;
        temp->next=node;

    }

}
void dels(int position,Node *&head){
    //deleting the starting node
    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any part of the node
        Node*curr=head;
        Node*prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void displays(Node *&head){
    Node *temp=head;
    if(temp==NULL){
        cout<<"The linked list is empty"<<endl;
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
            
        }
    }
}
Node * reverse(Node *head){
    cout<<"The reverse of the linked list"<<endl;
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev=NULL;
    Node*curr=head;
    Node*forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            cout<<prev->data<<"->>";
        }
        
    

}
int main(){
    //cout<<"enter the element in to the node"<<endl;
    Node *nod1=new Node(10);
    Node *head=nod1;
    Node *tail=nod1;
    addbegin(head,30);
    addbegin(head,56);
    addbegin(head,55);
    addbegin(head,77);
    reverse(head);

}

