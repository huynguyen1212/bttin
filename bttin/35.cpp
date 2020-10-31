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
		sort(a,a+n);
		int x=a[1]-a[0];
		for(int i=2;i<n;i++){
			x=__gcd(x,a[i]-a[i-1]);
		}
		int ans=1;
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0){
				int d=0;
				while(x%i==0){
					d++;
					x/=i;
				}
				ans*=(d+1);
			}
		}
		if(x>1) ans*=2;
		cout<<ans<<endl\;
	}
	return 0;
}
//Code by Ninh Ngoc

