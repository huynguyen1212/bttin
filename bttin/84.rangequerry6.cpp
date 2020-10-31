#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long b[n],ans=a[0];
		b[0]=a[0];
		for(int i=1;i<n;i++){
			long long maxx=0;
			for(int j=i-1;j>=0;j--){
				if(a[j]<=a[i]){
					maxx=max(maxx,b[j]);
				}
			}
			b[i]=maxx+a[i];
		}
		for(int i=0;i<n;i++){
			ans=max(ans,b[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

