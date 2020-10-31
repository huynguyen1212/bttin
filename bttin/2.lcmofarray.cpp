#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long ans=1;
		for(long long i=2;i<=n;i++){
			long long x=__gcd(ans,i);
			ans=ans*i/x;
		}
		cout<<ans<<endl;
	}
	return 0;
}
//code by Ninh Ngoc


