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
		int b[n],ans=1;
		b[0]=1;
		for(int i=1;i<n;i++){
			int maxx=0;
			for(int j=i-1;j>=0;j--){
				if(a[j]<a[i]){
					maxx=max(maxx,b[j]);
				}
			}
			b[i]=maxx+1;
			ans=max(ans,b[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

