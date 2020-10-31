#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x,d0=0,d1=0,d2=0;
		while(n--){
			cin>>x;
			if(x==0) d0++;
			else if(x==1) d1++;
			else d2++;
		}
		while(d0--){
			cout<<"0 ";
		}
		while(d1--){
			cout<<"1 ";
		}
		while(d2--){
			cout<<"2 ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

