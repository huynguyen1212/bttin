#include <bits/stdc++.h>
using namespace std;
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
		sort(a,a+n);
		int min1=a[0],min2=-1;
		if(a[0]!=a[n-1]){
			for(int i=1;i<n;i++){
				if(a[i]!=a[i-1]){
					min2=a[i];
					break;
				}
			}
		}
		cout<<min1<<" "<<min2<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

