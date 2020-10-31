#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long ans=__gcd(x,y);
		while(ans--){
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

