#include<bits/stdc++.h>
using namespace std;
int main(){
    string aplha="internationalization";
  int n=aplha.size(); 
     int sum=0;
        for(int i=1;i<=n-2;i++){
                    sum++;
    }
    if(n>10){
        cout<<aplha[0]<<sum<<aplha[n-1];
    }
    else{
        cout<<aplha;
    }
    

    }
