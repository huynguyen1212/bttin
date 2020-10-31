#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long s=1,x=sqrt(n);
		for(int i=2;i<=x;i++){
			if(n%i==0){
				s+=(i+ n/i);
			}
		}
		if(x*x==0){
			s-=x;
		}
		if(n==s){
			cout<<"1\n";
		}
		else{
			cout<<"0\n";
		}
	}
	return 0;
}
//Code by Ninh Ngoc

