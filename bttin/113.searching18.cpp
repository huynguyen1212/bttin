#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long x;
		vector <long long> a,b,c,d,ans;
		for(int i=0;i<n1;i++){
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<n2;i++){
			cin>>x;
			b.push_back(x);
		}
		for(int i=0;i<n3;i++){
			cin>>x;
			c.push_back(x);
		}
		int l1=0,l2=0;
		while(l1<n1 && l2<n2){
			if(a[l1]==b[l2]){
				d.push_back(a[l1]);
				l1++;
				l2++;
			}
			else if(a[l1]<b[l2]){
				l1++;
			}
			else{
				l2++;
			}
		}
		l1=0,l2=0;
		while(l1<n3 && l2<d.size()){
			if(c[l1]==d[l2]){
				ans.push_back(c[l1]);
				l1++;
				l2++;
			}
			else if(c[l1]<d[l2]){
				l1++;
			}
			else{
				l2++;
			}
		}
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

