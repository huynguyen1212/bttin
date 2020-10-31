#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long ans=a[0];
		for(int i=0;i<n-1;i++){
			long long s=a[i];
			ans=max(ans,a[i]);
			for(int j=i+1;j<n;j++){
				s*=a[j];
				ans=max(ans,s);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

