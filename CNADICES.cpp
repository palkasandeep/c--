#include<bits/stdc++.h>
using namespace std;
class you{
bool candiy(int arr[],int k,int n){
        int maxele=0;
        for(int i=0;i<n;i++){
            int array=arr[i];
            maxele=max(array,maxele);
        }
        for(int i=0;i<n;i++){
            arr[i]+=k;
            if(arr[i]>=k){
                return true;
            }
            else{
                return false;
            }
        }
}
int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;
    int k=3;
    int arr[n]={2,3,5,1,3};
    candiy(arr,k,n);

}

};
