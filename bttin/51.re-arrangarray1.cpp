#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=-1;
		}
		for(int i=0;i<n;i++){
			if(0<=a[i] && a[i]<n){
				b[a[i]]=a[i];
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

