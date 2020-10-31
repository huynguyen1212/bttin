#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
int main (){
	int t;
	cin>>t;
	long long a[10001];
	a[0]=0,a[1]=1;
	for(int i=2;i<10001;i++){
		a[i]=(a[i-1]+a[i-2])% M;
	}
	while(t--){
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

