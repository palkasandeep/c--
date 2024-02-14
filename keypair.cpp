#include<bits/stdc++.h>
using namespace std;
int main()
{   int sum=16;
    int arr[]={1,4,45,6,10,8};
    unordered_map<int,int>mp;
    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        int key=itr->first;
        int val=itr->second;
        int pair=sum-key;
        if(pair==key){
            if(val>1){
                cout<<val;
            }       
        }
    }
    return 0;
    
}