#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>mp;
    mp["palka"]=88;
    mp["andy"]=90;
    mp["rubins"]=99;
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<endl;
        cout<<itr->second<<endl;
    }
    int arr[]={7,3,6,8,9,9,6,6};
    unordered_map<int,int>umpp;
    for(int i=0;i<8;i++){
        int key=arr[i];
        umpp[key]++;
    }
     for(auto itr=umpp.begin();itr!=umpp.end();itr++){
        cout<<itr->first<<endl;
        cout<<itr->second<<endl;
    }
    return 0;
}
