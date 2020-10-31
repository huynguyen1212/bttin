#include <bits/stdc++.h>
using namespace std;
long long findMin(long long arr[], int low, int high){ 
    if (high < low) return arr[0];  
    if (high == low) return arr[low];
    int mid = low + (high - low)/2;
    if (mid < high && arr[mid + 1] < arr[mid]){
    	return arr[mid + 1];
	}  
    if (mid > low && arr[mid] < arr[mid - 1]){
    	return arr[mid];
	}
    if (arr[high] > arr[mid]){
    	 return findMin(arr, low, mid - 1);  
	} 
    return findMin(arr, mid + 1, high);  
}  
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<findMin(a,0,n-1)<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

