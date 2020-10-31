#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	vector <int> a(1000005,0);
	for(int i=2;i<=1000;i++){
		if(a[i]==0){
			for(int j=i*i;j<= 1000000;j+=i){
				a[j]=1;
			}
		}
	}
	while(t--){
		int n;
		cin>>n;
		if(n<4) cout<<-1;
		if(n==4) cout<<2<<" "<<2;
		else{
			if(n%2==1){
				if(a[n-2]==0){
					cout<<2<<" "<<n-2;
				}
				else{
					cout<<-1;
				}
			}
			else{
				for(int i=3;i<=n/2;i++){
					if(a[i]==0){
						if(a[n-i]==0){
							cout<<i<<" "<<n-i;
							break;
						}
					}
				}
			}
		}	
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

