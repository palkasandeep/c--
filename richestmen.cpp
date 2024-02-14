#include<bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {

    int j= accounts.size() ;
    cout<<j;
    int max =0;

    for(int i=0 ;i<j ;i++){
        int sum = 0 ;
     for(int a=0;a<accounts[i].size() ;a++){
                int n=accounts[i].size();                                  
                cout<<n;
            sum = sum+accounts[i][a];
      }
      if(sum>max){max=sum;}  
    }
    return max;
}
int main(){
    vector<vector<int>> accounts={{2,4,6},{8,9,2}};
    int res=maximumWealth(accounts);
    cout<<res;
}