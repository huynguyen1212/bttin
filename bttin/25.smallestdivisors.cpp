#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main (){
	int t;
	cin>>t;
	for(int i=1;i<=1000000;i++){
		a[i]=i;
	}
	for(int i=2;i<=1000;i++){
		if(a[i]==i){
			for(int j=i*i;j<= 1000000;j+=i){
				if(a[j]==j){
					a[j]=i;
				}
			}
		}
	}
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}	
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc
