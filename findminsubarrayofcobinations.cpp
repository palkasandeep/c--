#include<bits/stdc++.h>
using namespace std;
string minwindow(string s,string t){
    int n=s.length();
    if(t.length()>n){
        return "";
    }
    unordered_map<char,int>mp;
    for(char &ch:t){
        mp[ch]++;
    }
    //initially our rquire count will be 3 because we require 3 strings
    //for that intialize require count with t.length
    int require_count=t.length();
     int i=0,j=0;
    int min_windowsize=INT16_MAX;
    //to identify the substring we intialize the i value as start of i
    int start_i=0;
    //STARTING WRITING OUR STORY
    while(i<j){
        char ch=s[j];
        if(mp[ch]>0){
            require_count--;
        }
        mp[ch]--;
    while(require_count==0){
        //shrink the window calculate the size of the window
        int curr_window=j-i+1;
        if(min_windowsize>curr_window){
            min_windowsize=curr_window;
            start_i=i;
        }
        //if we try to move the i we may lost any character from the t 
        //so there occurs deficiency of that charcter 
        //and as usal our requirecount value should also be increment by one
        //similary since there is a deficiency of the element in the recount
        //we need that require character inorder to achive this 
        //we have to increment the map to indicate that element is not present in the map
        mp[s[i]]++;
        if(mp[s[i]>0]){
            require_count++;
        }
        i++;
    }
    j++;   
}
return min_windowsize==INT16_MAX?"":s.substr(start_i,min_windowsize);
}
int  main(){
     string s="ADOBECODEBANC";
     string t="ABC";
     string res=minwindow(s,t);
     cout<<res;
     
}