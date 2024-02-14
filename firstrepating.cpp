#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,3,4,3,5,6};
    unordered_map<int,int>mp;
    for(int i=0;i<7;i++){
         mp[arr[i]]++;

    }
    for(int i=0;i<7;i++){
        int key=arr[i];
        auto temp=mp.find(key);
        if(temp->second>1){
            return i+1;
        }
    }
    return 0;
    }

