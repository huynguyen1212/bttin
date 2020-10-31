#include <bits/stdc++.h>
using namespace std;
int main (){
	vector <int> a(10005,0);
	a[0]=0,a[1]=0;
	for(int i=2;i<=10000;i++){
		if(a[i]==0){
			a[i]=a[i-1]+1;
			for(int j=i*i;j<=10000;j+=i){
				a[j]=-1;
			}
		}
		else a[i]=a[i-1];
	}
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;	
	}
	return 0;
}
//Code by Ninh Ngoc
