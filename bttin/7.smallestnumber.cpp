#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int x,y,z,n;
		cin>>x>>y>>z>>n;
		int a=__gcd(x,__gcd(y,z));
		long long b= x*y*z/a;
		long long c=pow(10,n-1),d=pow(10,n)-1;
		if(b<c){
			if(c%b==0){
				cout<<c;
			}
			else{
				cout<<(c/b+1)*b;
			}
		}
		else if(c<=b && b<=d){
			cout<<b;
		}
		else{
			cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

