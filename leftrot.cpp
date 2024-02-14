#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dumb[n];
    int k=0;
    int arr[n]={1,2,3,4,5};
    for(int i=2;i<n;i++){
       dumb[k]=arr[i];
       k++;
    }
    for(int i=0;i<2;i++){
        dumb[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;i++){
            arr[i]=dumb[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}