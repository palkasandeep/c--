#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,0,0};
    unordered_map<int,int>mpp;
    for(int i=0;i<5;i++){
        mpp.insert(arr[i]);
    }
    cout<<mpp;
}