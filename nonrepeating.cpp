#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in to the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int key=arr[i];
        mp[key]++;
    }
    cout<<"The count each element in the array"<<endl;
      for(auto itr=mp.begin();itr!=mp.end();itr++){
        
        cout<<itr->first<<"->"<<itr->second<<endl;
    }
    for(auto x:mp){
              if(x.second==1){
                cout<<"This element has been repeated only once"<<x.first;
              }
        }
        return 0;
    }

// im the only person who successfully for the first time with confidence solved this problem
