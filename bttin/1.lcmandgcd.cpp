#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		int ans1=__gcd(a,b),ans2=a*b/ans1;
		cout<<ans2<<" "<<ans1<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc
