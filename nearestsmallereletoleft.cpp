#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>array1={1,3,2,4};
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<array1.size();i++){
        if(st.size()==0){
                ans.push_back(-1);
        }
    else if(st.size()>0 && st.top()<array1[i]){
        ans.push_back(st.top());
    }
    else if(st.size()>0 && st.top()>=array1[i]){
        while(st.size()>0 && st.top()>=array1[i]){
            st.pop();
        }
        if(st.size()==0){
            ans.push_back(-1);
        }
        else{
                 ans.push_back(st.top());
        }
    }
    st.push(array1[i]);
    }
    
    /*while(!st.empty()){
        int temp=st.top();
        cout<<temp;
        st.pop();
    }*/
    //array1.erase(array1.begin(),array1.end());
    /*int i=0;
    while(i<array1.size()){
        cout<<array1[i];
        cout<<"array is empty";
    }*/
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}