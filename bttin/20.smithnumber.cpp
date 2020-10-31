#include <bits/stdc++.h>
using namespace std;
int dem(int a){
	int s=0;
	while(a){
		s+=a%10;
		a/=10;
	}
	return s;
}
int prime(int a){
	if(a<2) return 0;
	else if(a==2) return 1;
	else{
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0) return 0;
		}
		return 1;
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(prime(n)==1){
			cout<<"No\n";
		}
		else{
			int sum1=dem(n),sum2=0;
			for(int i=2;i<=sqrt(n);i++){
				if(n%i==0){
					int d=0;
					while(n%i==0){
						d++;
						n/=i;
					}
					sum2+=d*dem(i);
				}
			}
			if(n>1){
				sum2+=dem(n);
			} 	
			if(sum1==sum2){
				cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
	}
	return 0;
}
//Code by Ninh Ngoc

