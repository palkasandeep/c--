#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total=(n)*(n+1)/2;
    set<int>tin;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            tin.insert(arr[i]);
        }
    }
    for (const auto &element : tin) {
        cout << element << " ";
    }
    for(int i=0;i<n-1;i++){
        total-=arr[i];
    }
    cout<<total;
}