#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> st;
    int n;
     cout<<"enter the size of the tickets "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the tickets in to the ticket list"<<endl;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        st.insert(arr[i]);
     }
     int key;
     cout<<"enter the ticket which wons the lottery"<<endl;
     cin>>key;
         if(st.find(key)!=st.end()){
             cout<<"ramu has won the lottery"<<endl;
         }
        else{
             cout<<"ramu has lost the lottery"<<endl;
         }

     return 0;

}