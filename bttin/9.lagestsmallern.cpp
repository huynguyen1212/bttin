#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.size()==1){
			cout<<"-1";
		}
		else{
			int n=s.size();
			int i=n-2;
			while(i>=0 && s[i]<s[i+1]) i--;
			if(i==-1){
				cout<<"-1";
			}
			else{
				int k=n-1;
				while(s[k]>s[i]){
					k--;
				}
				if(i==0 && s[k]=='0'){
					cout<<"-1";
				}
				else{
					swap(s[k],s[i]);
					int x=n-1,y=i+1;
					while(x>y){
						swap(s[x],s[y]);
						x--;
						y++;
					}
					for(int i=0;i<n;i++){
						cout<<s[i];
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

