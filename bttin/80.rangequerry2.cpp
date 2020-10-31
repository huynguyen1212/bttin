#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		int dt=0,dg=0,ct=0;
		for(int i=l;i<r;i++){
			if(a[i]<=a[i+1] && ct==0){
				dt++;
			}
			else if(a[i]<=a[i+1] && ct==1){
				break;
			}
			else{
				dg++;
				ct=1;
			}
		}
		if(dt+dg==r-l) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
//Code by Ninh Ngoc

