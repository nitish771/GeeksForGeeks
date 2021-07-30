/*
	Problem : 
	Logic : iterate through every element, if current element is less than previous update min and check for max difference.
	Time : O(n)
	Space : O(1)
*/

#include<bits/stdc++.h>

using namespace std;

int arr_max_diff(int arr[], int n){
	int mn = arr[0], res;
	res = arr[1] - arr[0] ;

	for(int i=1; i<n; i++){
		res = max(res, arr[i]-mn);
		mn = min(mn, arr[i]);
	}
	return res;
}


int main(){
	//code here
	int arr[] = {1,3,6,3,2,4,5, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << arr_max_diff(arr, n);
	return 0;
}
