#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long sum=(n*n+n)/2,s=0;
		int x;
		n--;
		while(n--){
			cin>>x;
			s+=x;
		}
		cout<<sum-s<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

