#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		while(n%2==0){
			n/=2;
		}
		int s=1;
		for(int i=3;i<=sqrt(n);i+=2){
			if(n%i==0){
				int d=0;
				while(n%i==0){
					d++;
					n/=i;
				}
				s*=(d+1);
			}
		}
		if(n>1){
			s*=2;
		}
		cout<<s<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

