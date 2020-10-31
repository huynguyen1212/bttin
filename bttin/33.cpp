#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long m;
		cin>>s>>m;
		long long ans=0;
		for(int i=0;i<s.size();i++){
			ans=(ans*10 + s[i]-'0')%m;
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

