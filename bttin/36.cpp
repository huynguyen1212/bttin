#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long b;
		int p;
		cin>>b>>p;
		long long ans=0;
		for(int i=1;i<p;i++){
			if((i*i)%p==1){
				if(i<=b){
					ans+= (b-i)/p + 1;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

