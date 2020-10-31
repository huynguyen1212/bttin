#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long a;
		string b;
		cin>>a>>b;
		long long mod=0;
		for(int i=0;i<b.size();i++){
			mod=(mod*10 + (b[i]-'0'))%a;
		}
		cout<<__gcd(a,mod)<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

