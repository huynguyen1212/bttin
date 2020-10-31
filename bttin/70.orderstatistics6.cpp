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
		int ans=0;
		for(int i=n-1;i>0;i--){
			if(a[0]<=a[i]){
				ans=i;
				break;
			}
		}
		for(int i=0;i<n-1;i++){
			if(a[i]<=a[n-1]){
				ans=max(ans,n-1-i);
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

