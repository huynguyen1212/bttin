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
		int minn=a[0];
		for(int i=1;i<n;i++){
			minn=min(minn,a[i]);
		}
		long long ans=0;
		if(minn){
			int d=0,t=minn;
			while(t%2 ==0){
				d++;
				t/=2;
			}
			int x=log(t)/log(2),y=pow(2,x);
			ans=ans+x+d+ (t-y)*n+n;
		}
		for(int i=0;i<n;i++){
			ans+=(a[i]-minn);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

