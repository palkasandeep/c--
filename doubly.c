#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next,*prev;
}*head,*tail,*temp,*newnode;
int count=0;
void fin(){
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memeory is not allocated\n");
    }
    else{
        printf("enter the element in the list\n");
        scanf("%d",&(newnode->data));
        newnode->prev=newnode->next=NULL;
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            head->prev=newnode;
            newnode->next=head;
            head=newnode;
        }
        count++;

    }
}

void back(){
     newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memeory is not allocated\n");
    }
    else{
        printf("enter the element in the list\n");
        scanf("%d",&(newnode->data));
        if(head==NULL){
             head=tail=newnode;
             count++;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=NULL;
            tail=newnode;
            count++;
        }
    }
    }
void midin(){
     newnode=(struct node*)malloc(sizeof(struct node));
     int i=1;
     int pos;
     printf("enter the postion\n");
     scanf("%d\n",&pos);
     if(pos>count){
        printf("cant isnert");
     }
     else{
         printf("enter the element in the list\n");
        scanf("%d",&(newnode->data));
        newnode->prev=newnode->next=NULL;
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        temp->next=temp->next->prev=newnode;
        count++;

     }
}
void display(){
    if(head==NULL){
        printf("The list is empty\n");
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
void fdel(){
    if(head==NULL){
        printf("cant delete");
    }
    else{
        temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        count--;
    }
}
void bl(){
    if(head==NULL){
        printf("cant delete\n");
    }
    temp=tail;
    tail=tail->prev;
    if(tail!=NULL){
        tail->next=NULL;
    }
    count--;
}
void midel(){
    if(head==NULL){
        printf("cant delete\n");
    }
    else{
        int i=1,p;
        printf("enter the pso where u want to delete");
        scanf("%d",&p);
        if(p>count){
            printf("cant delete");
        }
        else{
            temp=head;
            while(i<p){
                temp=temp->next;
                i++;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            count--;
        }
    }

}
void main(){
//    // fin();
//     //fin();
   fin();
        back();
         back();
         back();
         midin();
         //fdel();
        //bl();
        midel();
         display();
}