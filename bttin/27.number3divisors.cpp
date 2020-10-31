#include <bits/stdc++.h>
using namespace std;
int a[1000005]={0};
int main (){
	int t;
	cin>>t;
	a[0]=1;a[1]=1;
	for(int i=2;i<=1000;i++){
		if(a[i]==0){
			for(int j=i*i;j<= 1000000;j+=i){
				a[j]=1;
			}
		}
	}
	while(t--){
		int l,r;
		cin>>l>>r;
		int x=sqrt(l),y=sqrt(r),ans=0;
		if(x*x<l) x++;
		for(int i=x;i<=y;i++){
			if(a[i]==0){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

