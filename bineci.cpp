#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"enter the string"<<endl;
cin>>s;
cout<<"str"<<s<<endl;
int count=0,sum=0;
for(int i=s.size()-1;i>=0;i--)
{
    sum+=((int)s[i]-48)*(pow(2,count));
    count++;
}
cout<<"decimal value"<<sum;
return 0;
}