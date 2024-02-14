#include<stdio.h>
int arr[100],n;
int f=-1,r=-1;
void insert(){
    if((r+1)%n==f){
        printf("overflow");
    }
    else if(r==-1 && f==-1){
        r=f=0;
    }
    else{
        r=(r+1)%n;
    }
    printf("enter the element\n");
    scanf("%d",&arr[r]); 
}
void del(){
    if(f==-1){
        printf("underflow\n");
        return;
    }
    else if(f==r){
        f=r=-1;
    }
    printf("The element is %d",arr[f]);
    f=(f+1)%n;

}
void display(){
    if(f==-1){
        printf("queue is empty");
        return;
    }
    else{
        int i=f;
        while(i!=r){
            printf("%d\t",arr[i]);
            i=(i+1)%n;
        }
        printf("%d",arr[i]);
    }

}
void main(){
    insert();
    insert();
    insert();
    del();
    display();
}