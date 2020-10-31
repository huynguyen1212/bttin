#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int ans=0;
		int c[n+1][n+1]={0};
		for(int i=0;i<n+1;i++){
			c[0][i]=0;
			c[i][0]=0;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(b[i-1]==a[j-1]){
					c[i][j]=c[i-1][j-1]+1;
				}
				ans=max(ans,c[i][j]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

