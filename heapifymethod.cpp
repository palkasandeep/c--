#include<bits/stdc++.h>
using namespace std;
void maxheap(int arr[],int n,int i){
    int largest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
if(l<n && arr[l]>arr[largest])
{    largest=l;
}
if(r<n && arr[r]>arr[largest])
{    largest=r;
}
if(largest!=i){
    swap(arr[i],arr[largest]);
    maxheap(arr,n,largest);
}

}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
void heapsort(int arr[],int n){
    //building the maxheap
     for(int i=n/2-1;i>=0;i--){
    maxheap(arr,n,i);
}
//deleting the element from
/* deletion in maxheap always start from the root node there is no other way rather 
 than deleting the root node for that we have to swap the 
 deleteed element with the lastleaf node of the tree 
 after swapin we have to check the property of the maxheap
 and again give a recursive call
 which will make the tree maxheap and gives us after that perform the operations
 aas usual*/
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        maxheap(arr,i,0);
    }
    //sorted array
    cout<<"the sorted array is"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    cout<<"enter the size of the treee"<<endl;
    int n;
    cin>>n;
    cout<<"enetr the elements in to the tree"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array before heapifyied"<<endl;
    display(arr,n);
    //building the max heap
    for(int i=n/2-1;i>=0;i--){
    maxheap(arr,n,i);
}
cout<<"the array after the heapify methood"<<endl;
    display(arr,n);
 heapsort(arr,n);
}