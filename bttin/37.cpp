#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
long long nhan(long long a, long long b){
	if( b==1 ) return a % M;
	long long temp = nhan(a, b/2);
	temp = temp + temp;
	if( b%2==1 ) temp = temp + a;
	return temp % M;
}
 
long long exp(long long a, long long n ){
	if(a==0) return 0;
	if( n==0 ) return 1;
	long long temp = exp(a, n/2);
	temp = nhan(temp, temp);
	if( n%2==1 ) temp = nhan(temp, a);
	return temp % M;
}

long long C(int k, int n){
	long long r = 1;
	for (int i = 1; i <= k; i++,n--)
		r = r*n%M*exp(i,M-2)%M;
	return r%M;
}

int main (){
	int t;
	cin>>t;
	while(t--){
		int n,r;
		cin>>n>>r;
		cout<<C(r,n)<<endl;	
	}
	return 0;
}
//Code by Ninh Ngoc

