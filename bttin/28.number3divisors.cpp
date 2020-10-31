#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int minn=min(m,n),maxx=max(m,n);
		int x=maxx/a-minn/a;
		if(minn%a==0) x++;
		int y=maxx/b-minn/b;
		if(minn%b==0) y++;
		int q=(a*b)/__gcd(a,b);
		int z=maxx/q-minn/q;
		if(minn%q==0) x++;
		cout<<x+y-z<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

