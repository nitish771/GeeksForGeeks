/*
problem : https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/1/
Logic : The logic to solve this problem is shift all odd bits to right and even bits to left	

Difficulty: Easy
Tags :  Bit magic
*/

#include <iostream>
#include <stdio.h>

using namespace std;

unsigned int swapBits(unsigned int n){
	unsigned int even_bits = n & 0xAAAAAAAA;
	unsigned int odd_bits = n & 0x55555555;
	even_bits >>= 1;
	odd_bits <<= 1;
	return even_bits|odd_bits;
}

int main(){
	int n = 42;
	// cout << ~2 ; //(n&3);
	cout << swapBits(34);
	return 0;
}
