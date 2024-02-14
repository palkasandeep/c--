#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr={7,1,5,3,6,4};
    int n=arr.size();
    int sum=INT_MIN;
    int i=0;
    int j=i+1;
    int maxim=INT_MIN;
    while(i<n){
        if(maxim==0){
            return 0;
        }
        if(j!=n){
            maxim=max(maxim,arr[j]-arr[i]);
            j++;
        }
        else{
            i++;
            j=i+1;
        }
    }
    cout<<maxim;
  
}