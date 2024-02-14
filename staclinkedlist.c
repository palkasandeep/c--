#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*toperr=NULL;
void pushes(int x){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(toperr==NULL){
        toperr=newnode;
    }
    else{
    newnode->next=toperr;
    toperr=newnode;
    }
}
void popo(){
    struct node*temp=toperr;
    if(toperr==NULL){
        printf("stack is empty");
    }
    else{
    printf("%d is deleted",temp->data);
    toperr=toperr->next;
    free(temp);
    }
}
void displays(){
    struct node*pt;
    pt=toperr;
    while(pt!=NULL){
        printf("%d",pt->data);
        pt=pt->next;
    }
}

void main(){
    pushes(90);
    pushes(78);
    pushes(45);
    pushes(67);
    popo();
    displays();
}