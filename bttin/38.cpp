#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long ans=0,x=1;
		for(int i=n-1;i>=0;i--){
			ans+=a[i]*x;
			x*=m;
		}
		cout<<ans;
	}
	return 0;
}
//Code by Ninh Ngoc

