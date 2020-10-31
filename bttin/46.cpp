#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	int a[18];
	a[0]=0,a[1]=1;
	for(int i=2;i<18;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(t--){
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++){
			int check=0;
			for(int j=0;j<18;j++){
				if(A[i]==a[j]){
					check=1;
					break;
				}
			}
			if(check) cout<<A[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

