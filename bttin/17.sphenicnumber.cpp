#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<"0";
		}
		else{
			int check=1,d=0;
			for(int i=2;i<=sqrt(n);i++){
				if(n%i==0){
					int dem=0;
					d++;
					while(n%i==0){
						n/=i;
						dem++;
					}
					if(dem>1){
						check=0;
						break;
					}
				}
			}
			if(n>1){
				d++;
			}
			if(check==1 && d==3){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
			cout<<endl;
		}
	}
	return 0;
}
//Code by Ninh Ngoc

