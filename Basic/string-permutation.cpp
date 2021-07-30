/*
	Problem : https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
	Topic : Recursion, Math, String
	Difficulty : Basic
	Tags : String, Math
*/

#include<bits/stdc++.h>

using namespace std;


void swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(string s,  int n){
	if(n==s.length()-1){
		cout << s << endl;
		return;
	}

	for(int i=n; i<s.length(); i++){
		swap(&s[i], &s[n]);
		permutation(s, n+1);
		swap(&s[n], &s[i]);
	}

}

int main(){
	//code here
	string perm;
	perm = "abc";
	permutation(perm, 0);
	return 0;
}
