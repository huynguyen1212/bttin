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
		if(x+y+nho>9){
			char t2='0'+ (x+y+nho)%10;
			c+=t2;
			nho=1;
		}
		else{
			char t2='0'+ (x+y+nho);
			c+=t2;
			nho=0;
		}
	}	
	if(nho) c+='1';
	int m=0,n=c.size()-1;
	while(m<n){
		swap(c[m],c[n]);
		m++;
		n--;
	}
	return c;
}
string nhan(string a,char b){
	int x= b-'0';
	string c="";
	int nho=0;
	for(int i=a.size()-1;i>=0;i--){
		int y=a[i]-'0';
		int s=x*y+nho;
		nho=s/10;
		c+=(s%10 +'0');
	}	
	if(nho) c+=(nho+'0');
	int m=0,n=c.size()-1;
	while(m<n){
		swap(c[m],c[n]);
		m++;
		n--;
	}
	return c;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		string ans="";
		int d=0;
		for(int i=b.size()-1;i>=0;i--){
			string x=nhan(a,b[i]);
			for(int i=0;i<d;i++){
				x+='0';
			}
			ans=add(ans,x);
			d++;
		}
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

