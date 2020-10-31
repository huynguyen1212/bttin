#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dt=0;
		for(int i=0;i<n-1;i++){
			if(a[i]<a[i+1]){
				dt=1;
				break;
			} 
		}
		int l=0,r=n-1,ans=-1;
		if(dt==1){
			while(l<=r){
				int mid=(l+r)/2;
				if(a[mid]==x){
					ans=1;
					break;
				}
				else if(a[mid]<x){
					l=mid+1;
				}
				else{
					r=mid-1;
				}
			}
		}
		else{
			while(l<=r){
				int mid=(l+r)/2;
				if(a[mid]==x){
					ans=1;
					break;
				}
				else if(a[mid]<x){
					r=mid-1;
				}
				else{
					l=mid+1;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

