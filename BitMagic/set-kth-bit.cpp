/*
problem : https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1/
Logic : to set kth bit from right just do `OR` operation of number (binary) and 
a number whose only kth bit is set

For example num is 11 (1 0 1 1) and we have to set 2 th bit so anwser should be  15 (1 1 1 1)
which is 1 0 1 0 `OR` 0 1 0 0
Difficulty: Easy
Tags : 
*/

#include <iostream>

using namespace std;


int set_kth_bit(int n, int k){
	return n|(1<<k);
}

int main(){
	int n, k;
	cin >> n;
	cin >> k;
	cout << set_kth_bit(n, k);
	return 0;
}
