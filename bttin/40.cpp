#include <bits/stdc++.h>
using namespace std;
string add(string a,string b){
	int x=a.size()-b.size(); 
	if(x>0){
		char t1='0';
		while(x--){
			b=t1+b;
		}
	}
	else if(x<0){
		x*=(-1);
		char t1='0';
		while(x--){
			a=t1+a;
		}
	}
	string c="";
	int nho=0;
	for(int i=a.size()-1;i>=0;i--){
		int x=a[i]-'0',y=b[i]-'0';
		int s=x+y+nho;
		nho=s/10;
		c+=(s%10 +'0');
	}	
	if(nho) c+='1';
	return c;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		string c=add(a,b);
		for(int j=c.size()-1;j>=0;j--){
			cout<<c[j];
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

