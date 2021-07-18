/*
problem : https://practice.geeksforgeeks.org/problems/swap-two-nibbles-in-a-byte0446/1/
Logic : 
	Nibble is set of 4 bits. To swap four nibbles we can perform this operation
	second part to left = ((num&0x0F)<<4)
	first part to right = ((num&0xF0)>>4)
	result = ((num&0x0F)<<4)|((num&0xF0)>>4)

Difficulty: Easy
Tags :  Accolite, Cisco, Qualcomm, Samsung
*/

#include <iostream>
#include <stdio.h>

using namespace std;


unsigned char swap_nibbles(unsigned char x){
	printf("%d\n", x);
	return ((x&0x0F)<<4)|((x&0xF0)>>4);
}

// function to swap according to k (if k==4 will work as swap_nibbles)
// if k==3 will swap first 3bits with last 3 bits and vice-versa 
unsigned char swap_k_bits(unsigned char x, int k){
	printf("%d\n", x);
	if(k==3)
		return ((x&07)<<3)|((x&070)>>3);
	else if(k==4)
		return ((x&0x0F)<<4)|((x&0xF0)>>4);
}

int main(){
	unsigned char x = 0x64;
	printf("%d\n",  swap_nibbles(x));
	printf("%d\n",  swap_k_bits(034, 3));
	return 0;
}
