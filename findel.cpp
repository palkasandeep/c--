#include <iostream>
#include<unordered_set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	int n;
	cout<<"enter the size of the tickets\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		cout<<"\n";
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}
