#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	int a[1005]={0};
	a[0]=1;a[1]=1;
	for(int i=2;i<=32;i++){
		if(a[i]==0){
			for(int j=i*i;j<= 1005;j+=i){
				a[j]=1;
			}
		}
	}
	while(t--){
		int n;
		cin>>n;
		int x=sqrt(n);
		for(int i=2;i<=x;i++){
			if(a[i]==0){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

