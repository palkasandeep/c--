#include<bits/stdc++.h>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int m ){
    unordered_set<int>s1;
    for(int i=0;i<n;i++){
        s1.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        int key=arr2[i];
        if(s1.find(key)!=s1.end()){
            cout<<"The element present in the both the arrays is"<<endl;
            cout<<key;

        }
    }
   
return 0;

}
int main(){
    cout<<"enter the size of the first array"<<endl;
    int n;
    cin>>n;
    int arr1[n];
    cout<<"enter the elements in to the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the size of the second array"<<endl;
    int m;
    cin>>m;
    int arr2[m];
    cout<<"enter the elements in to the second array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,n,m);

}