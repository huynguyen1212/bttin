#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long ans=0,pos=0;
		for(int i=0;i<k;i++){
			ans+=a[i];
		}
		for(int i=1;i<n-k+1;i++){
			if(ans< ans-a[i-1]+a[i+k-1]){
				ans=ans-a[i-1]+a[i+k-1];
				pos=i;
			}
		}
		for(int i=pos;i<pos+k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

