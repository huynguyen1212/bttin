#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		vector <int> a;
		while(n--){
			cin>>x;
			if(x>0){
				a.push_back(x);
			}
		}
		sort(a.begin(),a.end());
		int ans=1;
		for(int i=0;i<a.size();i++){
			if(ans<a[i]){
				break;
			}
			else{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

