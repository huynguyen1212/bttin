#include <bits/stdc++.h>
using namespace std;
int dem(int a){
	if(a==0) return 1;
	int d=0;
	while(a){
		d++;
		a/=10;
	}
	return d;
}
bool cmp(int a, int b){
	long long x=a*pow(10,dem(b))+b;
	long long y=b*pow(10,dem(a))+a;
	if(x>y) return true;
	else return false;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

