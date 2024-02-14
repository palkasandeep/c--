#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the array size";
    int n;
    cin>>n;
    cout<<"enter the elements in to the array";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the subarray bound"<<endl;
    int k;
    cin>>k;
  //  int sum[n]={0};
        int sum=0;
        int i=0,j=0;
        int maxi=INT16_MIN;
        while(j<n){
            sum+=arr[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maxi=max(maxi,sum);
                sum-=arr[i];
            }
            i++;
            j++;
        }
   
    cout<<"maximum sum is"<<endl;
    cout<<maxi;
   
    return 0;
}