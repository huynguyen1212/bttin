#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		a[0]=a[1]+10;
		int maxx=a[1];
		for(int i=1;i+k-1<=n;i++){
			if(a[i-1]<maxx){
				maxx=max(maxx,a[i+k-1]);
				cout<<maxx<<" ";
			}
			else{
				maxx=a[i];
				for(int j=i+1;j<i+k;j++){
					maxx=max(maxx,a[j]);
				}
				cout<<maxx<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

