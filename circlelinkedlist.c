/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*root;
struct node*create(int x){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memeory cannot be intiaied");
    }
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}
void frontss(int data){
    struct node*newnode=create(data);
        //check if root is empty
        //whic indicates it is the first element of the list
        if(root==NULL){
            root=newnode;
            newnode->next=root;
        }
        struct node*temp=root;
        while(temp->next!=root){
            temp=temp->next;
        }    
        temp->next=newnode;
        newnode->next=root;
    
}
void display(){
    struct node*temp=root;
   do{
    printf("%d",temp->data);
    temp=temp->next;
   }while(temp->next!=root);
}
int sizelist(){
    int count=1;
    struct node*temp=root;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
void anypos(int pos,int data){
    int i=1;
    if(pos<=0){
        printf("invalid");
    }
    else if(root==NULL && pos>1){
        printf("invalid");
    }
    else if(root!=NULL && pos>sizelist()){
        printf("invalid");
    }
    else if(pos==1){
        frontss(data);
    }
    else{
        struct node*newnode=create(data);
        if(newnode!=NULL){
            struct node*temp1=root,*temp2=NULL;
            while(temp1->next!=NULL){
                temp2=temp1;
                temp1=temp1->next;
            }
            temp2->next=newnode;
            newnode->next=temp1;
            
        }
    }

    }
void frontdelete(){
    struct node*temp,*last;
    temp=root;
    last=root;
    if(root==NULL){
        printf("invalid");
    }
    else if(temp->next==root){
        printf("deleted is %d",temp->data);
        free(temp);
        root=NULL;
    }
    while(temp->next!=root){
        temp=temp->next;
    }
    root=root->next;
    temp->next=root;
    free(temp);
    temp=NULL;
}
void deleteend(){
    struct node*back,*fronts;
    back=root;
    fronts=root->next;
    if(root==NULL){
        printf("invalid");
    }
    else if(back->next=root){
        printf("deleted is %d",back->data);
        free(back);
        root=NULL;
    }
    while(fronts->next!=root){
        back=fronts;
        fronts=fronts->next;
    }
    back->next=root;
    printf("deleted data is %d",fronts->data);
    free(fronts);
    fronts=NULL;
}
void delpos(int pos){
    if(pos<=0){
        printf("invalid");
    }
    else if(pos==1){
        frontdelete();
    }
    else if(pos==sizelist()){
        deleteend();
    }
    else{
        struct node*fronts=root;
        struct node*back=NULL;
        int i=1;
        while(i<pos){
            back=fronts;
            fronts=fronts->next;
            i=i+1;
        }
        back->next=fronts->next;
        printf("deleleed element is %d",fronts->data);
        free(fronts);
        fronts=NULL;

    }
}
    void main(){
        int n=1;
        while(n){
            printf("1.insertbegin\n2.atanypos\n3.delfront\n4.dellast\n5.delepos\n6exit(0)\n7.display");
            int choice;
            printf("enter your choice\n");
            scanf("%d",&choice);
            switch(choice){
                case 1:{
                int data;
                printf("enter the data\n");
                scanf("%d",&data);
                frontss(data);
                break;
                }
                case 2:{
                int data;
                printf("enter the data\n");
                scanf("%d",&data);
                int pos;
                printf("enter the position\n");
                scanf("%d",&pos);
                anypos(data,pos);
                break;
                }
                case 3:{
                    frontdelete();
                    break;
                }
                case 4:
                {
                    deleteend();
                    break;
                }
                case 5:{
                    int pos;
                    printf("enter the position\n");
                    scanf("%d",&pos);
                    delpos(pos);
                    break;
                }
                case 7:display();
                break;
                case 6:exit(0);
            }
        }
    }

*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*root;
int count=0;
void frontinsertion(){
    struct node*newnode=(struct node*)malloc(sizeof(struct  node));
     struct node*temp=root;
    if(newnode==NULL){
    //struct node*newnode=(struct node*)malloc(sizeof(struct  node));
        printf("the memeory is not aloocated");
    }
    else{  
          if(root==NULL){
           printf("enter the element in the list\n");
           scanf("%d",&(newnode->data));
            root=newnode;
            newnode->next=root;
            count++;
          }
          else{
            printf("enter the element in the list\n");
           scanf("%d",&(newnode->data));
            while(temp->next!=root){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=root;
          }
    }
    }
int sizelen(){
    struct node*temp=root;
    int count=0;
    do{
        count++;
        temp=temp->next;
    }while(temp!=root);
    return count;
}
void Anypos(){
    struct node*newnode=(struct node*)malloc(sizeof(struct  node));
    int i=1;
    int pos;
    int data;
    int len=sizelen();
    struct node*f=root;
    struct node*r=NULL;
    printf("enter the position \n");
    scanf("%d",&pos);
    if(pos<=0){
        printf("in valid");
    }
    else if(pos>len){
        printf("in valid choice");
    }
    else if(pos==1){
        frontinsertion();
    }
    else if(pos==len){
            while(i<len-1){
                f=f->next;
                i++;
            }
            printf("enter the element in the list\n");
        scanf("%d",&(newnode->data));
        f->next=newnode;
        newnode->next=root;
    }
    else{
        while(i<pos-1){
           
            f=f->next;
            i++;
        }
         printf("enter the element in the list\n");
        scanf("%d",&(newnode->data));
        f->next=newnode->next;
        f->next=newnode;

    }
}
void display(){
    struct node*temp=root;
    do{
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=root);
}

void main(){
    int n=1;
    while(n){
        printf("1.insert\n2.display()\n3.atanypos\n4.exit()");
        int choice;
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            frontinsertion();
            break;
            case 2:display();
            break;
            case 3:Anypos();
            break;
            case 4:exit(0);
        }
    }
}
