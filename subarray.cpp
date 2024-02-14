#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter ur birthday"<<endl;
    int b;
    cin>>b;
    cout<<"enter the m value";
    int m;
    cin>>m;
    int count=0;
    int cont1=1;
    for(int i=0;i<n;i++){
        int j=i+1;
        cont1++;
        if(arr[i]+arr[j]==b && cont1==m){
            count++;
             cont1--;
        }
       
       
    }
     cout<<count;
    return 0;
}