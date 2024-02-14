#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements in to the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    vector<int>ans;
    int count=0;
    while(count<n){
        if (abs(arr[left])<abs(arr[right])){
                ans.push_back(pow(arr[left],2));
                left++;
        }
        else if(abs(arr[left])>abs(arr[right])){
            ans.push_back(pow(arr[right],2));
            right--;
        }
        else{
            ans.push_back(pow(arr[right],2));
        }
        count++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"";
    }
}