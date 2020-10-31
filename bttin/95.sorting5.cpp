#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,m,x;
		cin>>n>>m;
		vector <int> a,b;
		for(int i=0;i<n+m;i++){
			cin>>x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		cout<<a[0]<<" ";
		for(int i=1;i<n+m;i++){
			if(a[i]!=a[i-1]){
				cout<<a[i]<<" ";
			}
			else{
				b.push_back(a[i]);
			}
		}
		cout<<endl;
		for(int i=0;i<b.size();i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

