#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	int a[10005]={0};
	a[0]=1;a[1]=1;
	for(int i=2;i<=100;i++){
		if(a[i]==0){
			for(int j=i*i;j<= 10000;j+=i){
				a[j]=1;
			}
		}
	}
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(a[i]==0){
				if(a[n-i]==0){
					cout<<i<<" "<<n-i;
					break;
				}
			}
		}	
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

