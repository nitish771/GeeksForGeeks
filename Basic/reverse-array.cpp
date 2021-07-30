/*
	Problem : *
	Logic : iterate throguh n//2 and reverse ith item to (n-i)th
	Tags : Array
*/

#include<bits/stdc++.h>

using namespace std;

void reverse_array(int arr[], int n){
	for(int i=0; i<n/2; i++){
		int t = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-i-1] = t;
	}
}

void print(int arr[], int n){
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
}


int main(){
	int n = 9;
	int arr[n] = {1,2,3,4,5,6,7,8,9};
	reverse_array(arr, n);
	print(arr, n);
	return 0;
}
