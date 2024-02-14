#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*root;
int count=0;
void frontinsertion(){
    struct node*newnode=(struct node*)malloc(sizeof(struct  node));
    if(newnode==NULL){
    //struct node*newnode=(struct node*)malloc(sizeof(struct  node));
        printf("the memeory is not aloocated");
    }
    else{
           printf("enter the element in the list\n");
           scanf("%d",&(newnode->data));
            newnode->next=root;
            root=newnode;
            count++;
    }
}
void backinsertion(){
    struct node*temp=root;
    struct node*newnode=(struct node*)malloc(sizeof(struct  node));
    if(newnode==NULL){
        printf("overflow\n");
    }
    else{
        printf("enter the element in the list\n");
        scanf("%d",&(newnode->data));
        if(root==NULL){
            newnode->next=NULL;
            root=newnode;
        }
        else{
            while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        count++;
        }
    }

}
void insertatanypos(){
    int i=1;
    int pos;
    printf("enetr the position\n");
    scanf("%d",&pos);
    if(pos>count){
        printf("cannot inset\n");
    }
    else{
          struct node*newnode=(struct node*)malloc(sizeof(struct  node));
          printf("enetr the element to be isnerteed\n");
          scanf("%d",&(newnode->data));
          struct node*temp=root;
          while(i<pos-1){
            temp=temp->next;
    }
            newnode->next=temp->next;
            temp->next=newnode;
             count++;
}
}
void frontdel(){
    if(root==NULL){
        printf("list is empty");
    }
    else{
        struct node*temp=root;
        root=root->next;
        printf("deleted element is %d", temp->data);
        count--;
        free(temp);
    }
}
void delback(){
if(root==NULL){
        printf("list is empty");
    }
    else{
        struct node*temp=root;
        struct node*temp2=root->next;
        while(temp2->next!=NULL){
            temp2=temp2->next;
            temp=temp->next;
        }
        printf("deleted element is %d\n",temp2->data);
        temp2->next=NULL;
        free(temp2);
        count--;

    }
}
void delpos(){
    int pos;
    int i=1;
    printf("enter the postion\n");
    scanf("%d",&pos);
    if(root==NULL){
        printf("list is empty");
    }
    else{
        struct node*temp1=root;;
        struct node*temp2=root->next;
        while(i<pos){
            temp1=temp1->next;
            temp2=temp2->next;
            i++;
        }
        temp1->next=temp2->next;
        printf("deleed %d",temp2->data);
        free(temp2);
        count--;
    }
}
void display(){
    struct node*temp=root;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void main(){
    int n=1;
    while(n){
        printf("1.insertfront\n2.insetback\n3.iunsert pos\n4.delfront\n5.delback\n6.delatpos\n7.exit()\n");
        int choice;
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:frontinsertion();
            break;
            case 2:backinsertion();
            break;
            case 3:insertatanypos();
            break;
            case 4:frontdel();
            break;
            case 5:delback();
            break;
            case 6:delpos();
            break;
            case 7:exit(0);
        }
    }
}