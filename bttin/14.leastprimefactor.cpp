#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main (){
	int t;
	cin>>t;
	for(int i=1;i<=10000;i++){
		a[i]=i;
	}
	for(int i=2;i<=100;i++){
		if(a[i]==i){
			for(int j=i*i;j<= 10000;j+=i){
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
