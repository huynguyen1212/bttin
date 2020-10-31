#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long x;
		cin>>n>>x;
		int a[n],ans=n+1;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			long long s=0;
			for(int j=i;j<n;j++){
				s+=a[j];
				if(s>x){
					ans=min(ans,j-i+1);
				}
			}
		}
		if(ans==n+1){
			cout<<"-1\n";
		}
		else{
			cout<<ans<<endl;
		}
	}
	return 0;
}
//Code by Ninh Ngoc

