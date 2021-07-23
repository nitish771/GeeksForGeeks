/*
problem : https://practice.geeksforgeeks.org/problems/josephus-problem/1/
Logic : reduce the number everytime by 1(killed) and make that position as starting one. Do it recursively

Difficulty: Easy
Tags :  Bit magic, Recursion
*/

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int josephus(int n, int k){
	if(n==1)
		return 1;
	return (josephus(n-1, k)+k-1)%n + 1;
}

int main(){
	int n, k;
	cout << "Enter n : ";
	cin >> n;
	cout << "Enter k : ";
	cin >> k;
	cout << josephus(n, k);

	return 0;
}
