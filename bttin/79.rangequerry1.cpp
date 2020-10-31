#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			a[i]+=a[i-1];
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			if((l==r && r==0)|| (l!=r && l==0)) cout<<a[r]<<endl;
			else cout<<a[r]-a[l-1]<<endl;
		}
	}
	return 0;
}
//Code by Ninh Ngoc

