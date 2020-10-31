#include <bits/stdc++.h>
using namespace std;
long long power(long long a, long long b,long long p) {
    if (b == 0) return 1;
    long long tmp = power(a, b/2,p);
    tmp = tmp*tmp % p;
    if (b % 2) tmp = tmp*a % p;
    return tmp;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long b,m;
		cin>>s>>b>>m;
		long long ans=0;
		for(int i=0;i<s.size();i++){
			ans=(ans*10 + s[i]-'0')%m;
		}
		cout<<power(ans,b,m)<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc
