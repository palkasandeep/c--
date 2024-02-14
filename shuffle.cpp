#include<bits/stdc++.h>
using namespace std;
void shufffle(int nums[],int n){
    int res[n];
      int m=n/2;
      int i=0;
      int j=m+1;
      for(int i=0;i<m;i++){
        res[2*i]=nums[i];
        res[2*i+1]=nums[i+m];
      }

        for(int i=0;i<n;i++){

            cout<<res[i];
        }
}
int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in to the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shufffle(arr,n);
}