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
		long long b[n];
		long long ans=a[0];
		if(n==2) ans=max(a[0],a[1]);
		else if(n>2){
			ans=max(a[1],a[0]+a[2]);
			b[0]=a[0],b[1]=a[1],b[2]=b[0]+a[2];
			for(int i=3;i<n;i++){
				b[i]=a[i]+max(b[i-2],b[i-3]);
				ans=max(ans,b[i]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

