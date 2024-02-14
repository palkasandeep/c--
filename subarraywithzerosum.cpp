#include<bits/stdc++.h>
using namespace std;
bool subarray(int arr[],int n){
   int  presum=0;
   unordered_set<int>s;
   for(int i=0;i<n;i++){
    presum+=arr[i];
    if(presum==0){
        return true;
    }
    if(s.find(presum)!=s.end()){
        cout<<"yes exists";
        return true;

    }
    s.insert(presum);
   
   }
   return 0;


}
int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in to the aarray"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subarray(arr,n);
}
