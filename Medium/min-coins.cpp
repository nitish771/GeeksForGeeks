/*
	Problem : 
	Logic :
	Tags : Dynamic Programming, Knapsack
	Time : O(|coins|.|amount})
	Space : O(|amount|)
*/


#include<bits/stdc++.h>

using namespace std;

int min_coins(int sum, int coins_count, int coins_arr[]){

	if(sum==0)
		return 0;
	if(sum<0)
		return -1;

	// table to memrise result
	long long int min_coins[sum+1];

	// fill min_coins with infinity
	for(int i = 0; i < sum+1; i++){
		min_coins[i] = INT_MAX;	
	}

	// we can't make zero from positive values coins
	min_coins[0] = 0;

	for(int coin_ind=0; coin_ind < coins_count; coin_ind++){
		for(int i=1; i<sum+1; i++){
			if(coins_arr[coin_ind] <= i){
				min_coins[i] = min(min_coins[i], 1 + min_coins[i - coins_arr[coin_ind]]);
			}
		}
	}
	if(min_coins[sum] == INT_MAX)
		return -1;
	return min_coins[sum];
}


int main(){
	//code here
	int coins[] = {1,2, 5, 10};
	int count = sizeof(coins)/sizeof(coins[0]);
	cout << min_coins(2367, count, coins);
	return 0;
}
