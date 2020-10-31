#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			if(a[i]!=0 && a[i]==a[i+1]){
				a[i]*=2;
				a[i+1]=0;
				i++;
			}
		}
		int d=0;
		for(int i=0;i<n;i++){
			if(a[i]==0){
				d++;
			}
			else{
				cout<<a[i]<<" ";
			}
		}
		while(d--){
			cout<<"0 ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

