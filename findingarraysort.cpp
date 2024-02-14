#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the line"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the height of the each student"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
  return 0;
    }
    
