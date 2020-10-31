#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long ans=((k*k-k)/2) * (n/k);
		int x=n-(n/k)*k;
		ans+= (x*x+x)/2;
		if(ans==k) cout<<"1\n";
		else cout<<"0\n";	
	}
	return 0;
}
//Code by Ninh Ngoc

