#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,4,7,2};
    int k=2;
    int n=arr.size();
    int mini;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<k;j++){
            int unfair=max(arr[i],arr[j])- min(arr[i],arr[j]);
    }
    cout<<mini;

}