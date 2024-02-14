#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*rear=NULL;
struct node*front=NULL;
void insertion(int x){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(rear==NULL){
        rear=front=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeu(){
    struct node*temp=front;
    if(front==NULL){
        printf("queue is empty");
    }
    else if(front==rear){
        printf("deleted data",front->data);
        front=rear=NULL;
    }
    else{
        struct node*temp=front;
        front=temp->next;
        int d=temp->data;
        temp->next=NULL;
        free(temp);
        printf("%d deelleted element is",d);
    }
}
void dis(){
    struct node*temp=front;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main(){
    insertion(90);
    insertion(56);
    insertion(45);
    dequeu();
    dis();
}