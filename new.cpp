#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *root=NULL;
void create(){
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(root==NULL){
	
	root=newnode;
	printf("node created");
}
else{
	temp=root;
	while(temp->next!=NULL){
	
		temp=temp->next;
	}
	temp->next=newnode;
}
}
void display(){
	struct node *temp=root;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void insert(){
	int x,pos,count=1;
	struct node*newnode,*temp=root;
	printf("enter the data to be inserted");
	scanf("%d",&x);
	printf("enter the location to be inserted");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(temp==NULL){
		temp=root=newnode;
		
	}
	else if(pos==1){
		newnode->next=temp;
		temp=root=newnode;
		
	}
	else{
		while(count<pos-1){
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		count++;
	}
	
}
 void remove(){
 
	struct node *p1,*p2,*temp=root;
	int pos,count=1;
	printf("enter the position you want to delete");
	scanf("%d",&pos);
	if(root==NULL){
		printf("list is empty");
	}
	else{
	
	while(count<pos){
		p1=temp;
		p2=temp->next;
		temp=temp->next;
		count++;
		
	}
	printf("%d element is deleted",p2->data);
	
	p1->next=p2->next;
	free(p2);
}
}
int main(){

	int n=1,choice;
	while(n){
	
	printf("1.create\n2.insert\n3.delete\n4.display \nenter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:create();
		break;
		case 2:insert();
		break;
		case 3:remove();
		break;
		case 4:display();
		break;
		default:
			printf("invalid choice");
	}
	printf("do you want to continue(if yes then 1   if no then 0)");
	scanf("%d",&n);
  }
  return 0;
}

