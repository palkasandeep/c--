#include<bits/stdc++.h>
using namespace std;
vector<int> negative(int arr[],int n,int k){
    vector<int>ans;
    deque<int>dq;
    //process for the first k size window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    //store anawer for the first k sized window
    if(dq.size()>0){
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    //this is for the remaing elements
    //dq.front() provides the index of the first element present in the queue
    //which helps us in the deletion of the previous element
    //for the first iteration the index value provided by the queue is 0
    //and the value of the i is 2 which means
    //2-0>=2 (>> since the value of the k is 2)
    //the condtion satisfied pop the element from the queue

    for(int i=k;i<n;i++){
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }
        //addition the next element in the array
        if(arr[i]<0){
            dq.push_back(i);
        }
        //ans store
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n]={-8,2,3,-6,10};
    int k; 
    cout<<"enter the value of the k is the rockstar thursday thursdsay thursday thursdsay thursdsa===          "<<endl;
    cin>>k;
    negative(arr,n,k);
    

}