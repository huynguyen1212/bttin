#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[10]={0};
		for(int i=0;i<s.size();i++){
			a[s[i]-'0']++;
		}
		int checkl=0,checkc=0,dc=0;
		for(int i=0;i<10;i++){
			if(a[i]!=0 && a[i]%2==0){
				checkc=1;
				dc++;
			}
			else if(a[i]%2==1){
				checkl=1;
			}
		}
		if((checkl==1 && checkc==0) || (dc==1 && a[0]!=0 && a[0]%2==0)){
			int value=0,lap=0;
			for(int i=1;i<10;i++){
				if(a[i]>=lap){
					lap=a[i];
					value=i;
				}
			}
			while(lap--){
				cout<<value;
			}
		}
		else{
			int value=0,lap=0;
			for(int i=0;i<10;i++){
				if(a[i]%2==1 && a[i]>=lap){
					lap=a[i];
					value=i;
				}
			}
			for(int i=0;i<10;i++){
				if(a[i]%2==1 && i!=lap){
					a[i]=0;
				}
			}
			for(int i=9;i>=0;i--){
				if(a[i]%2==0){
					int x=a[i]/2;
					while(x--){
						cout<<i;
					}
				}
			}
			while(lap--){
				cout<<value;
			}
			for(int i=0;i<10;i++){
				if(a[i]%2==0){
					int x=a[i]/2;
					while(x--){
						cout<<i;
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

