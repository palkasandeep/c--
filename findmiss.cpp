// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    cout<<"enter the elements in the array\n";
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int maxi=INT_MIN;
        int numsum=0;
        int arraysum=0;
        for(int i=0;i<n;i++){
        maxi=max(nums[i],maxi);
        numsum=numsum+nums[i];
    }
    for(int i=0;i<maxi;i++){
        arraysum+=arraysum+i;
    }
    cout<<maxi;
    /*arraysum=arraysum-numsum;
    cout<<arraysum;*/

    return 0;
}