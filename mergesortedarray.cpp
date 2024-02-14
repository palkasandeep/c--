#include<bits/stdc++.h>
using namespace std;
int merge(int nums1[],int m,int nums2[],int n){
 int total=m+n;
 for(int i=0;i<total;i++){
    if(nums1[i]>0 && ){
        nums1[i]=nums1[i];
    }
}
int main(){
    cout<<"enter the nums1 size m "<<endl;
    int m;
    cin>>m;
    int nums1[m];
    cout<<"enter the elments in to the nums1"<<endl;
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    cout<<"enter the nums2 size m "<<endl;
    int n;
    cin>>n;
    int nums2[n];
    cout<<"enter the elments in to the nums1"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    merge( nums1,m,nums2,n);

}
