#include<bits/stdc++.h>
using namespace std;

    string reverseString(string str) {
            
            stack<char>s;
            for(int i=0;i<str.length();i++){
                    char ch=str[i];
                    s.push(ch);
            }
            for(int i=0;i<str.length();i++){
                  str[i]='\0';
            }
           // string ans="";
            while(!s.empty()){
                char ch=s.top();
                str.push_back(ch);
                s.pop();
            }
            return str;

    }
    int main(){
        string str="FUCK";
        string res=reverseString(str);
        cout<<res;
    }
