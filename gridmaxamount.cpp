#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{2,3,4},{5,6,7}
    };
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
    }*/
    int sum=0;
    int i=0;
    for(int j=0;j<3;j++){
    
        sum+=arr[i][j];
        
    }
    int k=1;
    int sum2=0;
    for(int j=0;j<3;j++){
        sum2+=arr[k][j];
    }
    if(sum>sum2){
        cout<<sum;
    }
    else{
        cout<<sum2;
    }
  


}