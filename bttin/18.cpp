#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		long long ans=0;
		for(int i=p;i<=n;i+=p){
			int x=i;
			while(x%p==0){
				ans++;
				x/=p;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

