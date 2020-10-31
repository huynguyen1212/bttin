#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		int value=-1;
		for(int i=1;i<m;i++){
			if((a*i)%m==1){
				value=i;
				break;
			}
		}
		cout<<value<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

