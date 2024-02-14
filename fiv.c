#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node*head){
    struct node*temp=head;
    printf("the elements in the linked list are:");
    while(temp!=0){
        printf("%d",&temp->data);
        temp=temp->next;
    }
}
int main(){
    struct node*temp,*head,*newnode;
    int i,choice=1;
    head=0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(newnode));
    printf("enter the data");
    scanf("%d",&newnode->data);
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("do u want to continue(0,1)");
    scanf("%d",&choice);

    }
    display(head);
    return 0;
}
