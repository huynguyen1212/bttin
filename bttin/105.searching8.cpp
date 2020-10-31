#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k,x,ans=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==k) ans++;
		}
		if(ans==0) ans=-1;
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

