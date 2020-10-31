#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		vector <int> a,b;
		while(n--){
			cin>>x;
			int check=0;
			for(int i=0;i<a.size();i++){
				if(x==a[i]){
					b[i]++;
					check=1;
					break;
				}
			}
			if(check==0){
				a.push_back(x);
				b.push_back(1);
			}
		}	
		for(int i=0;i<b.size();i++){
			if(b[i]>1){
				cout<<a[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
//Code by Ninh Ngoc

