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
		int x=0,y=n/2,z=0;
		if(n%2){
			z=y;
			y++;
		}
		for(int i=0;i<n/2;i++){
			cout<<a[x]<<" "<<a[y]<<" ";
			x++;
			y++;
		}
		if(z) cout<<a[z];
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

