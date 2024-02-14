#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff;
    int expo;
    struct node *next;
};
void insert(struct node**poly,int c,int e){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->coeff=c;
    temp->expo=e;
    temp->next=NULL;
    if(*poly==NULL){
        *poly=temp;
    }
    else{
        struct node*cur=*poly;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next=temp;
    }
}
struct node*addpoly(struct node*poly1,struct node* poly2){
    struct node*result=NULL;
    while(poly1!=NULL || poly2!=NULL){
        if(poly1==NULL){
            insert(&result,poly2->coeff,poly2->expo);
            poly2=poly2->next;
        }
        else if(poly2==NULL){
             insert(&result,poly1->coeff,poly1->expo);
             poly1=poly1->next;
        }
        else if(poly1->expo>poly2->expo){
            insert(&result,poly1->coeff,poly1->expo);
             poly1=poly1->next;
        }
        else if(poly2->expo>poly2->expo){
            insert(&result,poly2->coeff,poly2->expo);
            poly2=poly2->next;
        }
        else{
            insert(&result,poly1->coeff+poly2->coeff,poly2->expo);
            poly1=poly1->next;
            poly2=poly2->next;
        }
    }
    return result;
}
void display(struct node*poly){
    while(poly!=NULL){
        printf("%dX^%d",poly->coeff,poly->expo);
        poly=poly->next;
        if(poly!=NULL){
            printf("+");
        }
    }
}

int main(){
    struct node*poly1=NULL,*poly2=NULL;
    insert(&poly1,5,10);
    insert(&poly1,9,5);
    insert(&poly1,3,2);
    display(poly1);
    printf("\n");
    insert(&poly2,5,5);
    insert(&poly2,4,2);
    insert(&poly2,3,1);
    struct node*res=addpoly(poly1,poly2);
     display(poly2);
    printf("\n");
    display(res);
    return 0;

}