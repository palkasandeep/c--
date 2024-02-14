#include<bits/stdc++.h>
using namespace std;
 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int i=0;
        int j=i+1;
        vector<int>arr;
        while(i<n){
            if(nums[i]>nums[j]){
                count++;
            }
            if(j==n-1){
                arr.push_back(count);
                count=0;
                i++;
                j=i+1;
            }   
            j++;
        }
        return arr;
    }
    int main(){
        vector<int>nums={8,1,2,2,3};
        vector<int> res=smallerNumbersThanCurrent(nums);
        for(int i=0;i<res.size();i++){
            cout<<res[i];
        }
        
    }