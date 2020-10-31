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
		long long ans=a[0],s=0;
		for(int i=0;i<n;i++){
			s+=a[i];
			ans=max(ans,s);
			if(s<0){
				s=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

