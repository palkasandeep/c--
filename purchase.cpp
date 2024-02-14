#include<bits/stdc++.h>
using namespace std;
int main(){
    /*cout<<"eneter the n";
    int n;
    cin>>n;*/
    vector<int>arr={1,2,3,4};
   unordered_set<int>inset;
   //unordered_set<int>iterator itr;
   for(int i=0;i<arr.size();i++){
    inset.insert(arr[i]);
   }
   for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*it;
   }
    
}