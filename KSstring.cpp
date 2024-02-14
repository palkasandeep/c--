#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the value of the k"<<endl;
    int k;
    cin>>k;
    cout<<"enter the string"<<endl;
    string s;
    cin>>s;
    vector<int>count(26,0);
    for(int ch:s){
        count[ch-'a']++;
    }
    string result;
    for(int i=0;i<26;i++){
            if(count[i]%k!=0){
                cout<<"-1";
                return 0;
            }
        result+=string(count[i]/k,'a'+i);
    }
    //to find the solution lexicographically
    sort(result.begin(),result.end());
    for(int i=0;i<k;i++){
        cout<<result;
    }
}
