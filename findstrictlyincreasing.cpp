#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,1,2};
    int count=0;
    for(int i=1;i,arr.size();i++){
        if(arr[i]<=arr[i-1]){
            if(count=1){
                return 0;
            }
            count++;
        }
        if(i>1 && arr[i]<=arr[i-2]){
            arr[i]=arr[i-1];
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    
}