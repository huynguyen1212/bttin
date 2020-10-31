#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,x,k;
		cin>>n>>k>>x;
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
		int l=0,r=n-1,pos;
		if(dt==1){
			while(l<=r){
				int mid=(l+r)/2;
				if(a[mid]==x){
					pos=mid;
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
					pos=mid;
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
		l=k/2,r=k-l;
		if(pos-l<0){
			l=pos,r=k-pos;
		}
		if(pos+r>=n){
			r=n-1-pos,l=k-n+1+pos;
		}
		for(int i=pos-l;i<pos;i++){
			cout<<a[i]<<" ";
		}
		for(int i=pos+1;i<=pos+r;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

