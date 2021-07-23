/*
problem : https://practice.geeksforgeeks.org/problems/gray-code-1611215248/1/
Logic : Make a list for 2bit lenght gray code and use the property of gray code that first half has prefix 0
	and other half is inverse order of first half.
	like - 0 0 (prefix 0) 
		   0 1
		   ---
		   1 1 ( prfix 1)
		   1 0 ( unit digits is inverse of first half)


Difficulty: Medium
Tags :  Bit magic, String
*/

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;


class Solution{
public:
	vector<string> result;
	vector<string> gray_code(int n, vector<string> L1, vector<string> L2 ){
		if(n==1)
			return L1;
		if(n==2){
			prefix("0", L1);
			prefix("1", L2);
			return combine(L1, L2);
		}

		else{
			prefix("0", L1);
			prefix("1", L2);
			L1 = combine(L1, L2);
			L2 = reverse_vector(L1);
			return gray_code(n-1, L1, L2);
		}
	}

	vector<string> reverse_vector(vector<string> L){
		int size = L.size();
		for(int i=0; i<size/2; i++){
			string temp = L[i];
			L[i] = L[size-i-1];
			L[size-i-1] = temp;
		}
		return L;
	}

	vector<string> combine(vector<string> L1, vector<string> L2 ){
		for(int i=0; i<L2.size(); i++)
			L1.push_back(L2[i]);
		return L1;
	}

	void prefix(string ch, vector<string> &L){
		for (int i = 0; i < L.size(); ++i)
			L[i] = ch+L[i];
	}

};


int main(){
	int n;
	cout << "Enter n : ";
	cin >> n;
	Solution sol;
	vector<string> L1 = {"0", "1"}; 
	vector<string> L2 = {"1", "0"};
	vector<string> ans = sol.gray_code(n, L1, L2);
	for(int i=0; i<pow(2,n); i++)
		cout << ans[i] << endl;
	return 0;
}
