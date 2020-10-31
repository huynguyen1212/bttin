#include <bits/stdc++.h>
using namespace std;
#define N 1000000007
long long power(long long a, long long b) {
    if (b == 0) return 1;
    long long tmp = power(a, b/2);
    tmp = tmp*tmp % N;
    if (b % 2) tmp = tmp*a % N;
    return tmp;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long h=a[0],g=a[0];
		for(int i=1;i<n;i++){
			h=(h*a[i])%N;
			g=__gcd(g,a[i]);
		}
		cout<<power(h,g)<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

