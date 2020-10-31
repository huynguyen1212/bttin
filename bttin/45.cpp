#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	long long a[100];
	a[0]=0,a[1]=1;
	for(int i=2;i<90;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(t--){
		long long n;
		cin>>n;
		int check=0;
		for(int i=0;i<90;i++){
			if(a[i]==n){
				check=1;
				break;
			}
		}
		if(check==1){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	return 0;
}
//Code by Ninh Ngoc

