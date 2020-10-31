#include <bits/stdc++.h>
using namespace std;
long long nhan(long long a, long long b, long long c) {
    if (b == 0) return 0;
    long long tmp = nhan(a, b/2,c);
    tmp = (tmp+tmp) % c;
    if (b % 2) tmp = (tmp+a) % c;
    return tmp;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<nhan(a,b,c)<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

