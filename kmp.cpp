#include<bits/stdc++.h>
using namespace std;


vector<int> lps(string str){
	int n=str.size();
	vector<int>lp(n,0);
	int len=0,i=1;
	lp[0]=0;
	while(i<n){
		if(str[len]==str[i]){
			len++;
			lp[i]=len;
			i++;
		}
		else{
			if(len==0){
				lp[i]=0;
				i++;
			}
			else{
				len=lp[len-1];
			}
		}
	}
	return lp;
	
}
int Str(string str,string pat){
	int n=str.size();
	int m=pat.size();
	vector<int>lp=lps(str);
	int i=0; 
	int j=0;
	while(i<n){
		if(str[i]==pat[j]){
			i++;
			j++;
			if(j==m){
				return i-j;
			}
		}	
			else if(i<n && str[i]!=pat[j]){
				if(j==0){
					i++;
				}
				else{
					j=lp[j-1];
				}
			
		}
	}
	return -1;
}
int main(){
	string str="cbaba";
	string pat="aba";
	lps(str);
	int res=Str(str,pat);
    cout<<res;
	return 0;
}