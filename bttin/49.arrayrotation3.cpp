#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		long long ans=0,s=0,s1=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			s1+= a[i]*i;
		}
		ans=s1;	
		for(int i=0;i<n-1;i++){
			s1=s1-s+a[i]*n;
			ans=max(ans,s1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

