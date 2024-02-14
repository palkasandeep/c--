#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*rear=NULL;
struct node*front=NULL;
void insertt(int x){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(rear==NULL){
        front=rear=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void dequ(){
        struct node*temp;
        temp=front;
        if(front ==NULL && rear==NULL){
            printf("under flow");
        }
        else{
            printf("deleted %d\n",front->data);
            front=front->next;
            rear->next=front;
            free(temp);

        }
}
void display(){
    struct node*temp=front;
    if(front==NULL && rear==NULL){
        printf("underflow");
    }
    else{
        while(temp->next!=front){
                printf("%d",temp->data);
                temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
void main(){
    insertt(90);
    insertt(78);
    insertt(56);
    dequ();
    display();

}