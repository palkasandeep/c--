#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;
void push(int x){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(top==NULL){
        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
}
/*void pop(){
    struct node*temp=top;
    if(top==NULL){
        printf("The stack is not allocated\n");
    }
    else{
        printf("%d\t",temp->data);
        top=top->next;
        free(temp);
    }
}*/



void pop(){
    struct node*temp=top;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
    printf("%d is deleted",temp->data);
    top=top->next;
    free(temp);
    }
}
void display(){
    struct node*temp=top;
    while(top!=NULL){
        printf("%d\t",top->data);
        top=top->next;
    }
}
void main(){
    push(20);
    push(40);
    push(50);
    display();
  pop();
    display();
}