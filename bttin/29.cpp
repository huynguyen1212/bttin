#include <bits/stdc++.h>
using namespace std;
long long power(int a, int b,long long p) {
    if (b == 0) return 1;
    long long tmp = power(a, b/2,p);
    tmp = tmp*tmp % p;
    if (b % 2) tmp = tmp*a % p;
    return tmp;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		long long p;
		cin>>x>>y>>p;
		cout<<power(x,y,p)<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

