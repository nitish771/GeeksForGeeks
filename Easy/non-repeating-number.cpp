/*
problem : https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1/
Logic : XORing two same elements results 0, so if we xor all the elements result will be
    xor of non-repeating number.
    That will have at least one set bit we will find and group according to that.

Difficulty: Easy
Tags : Big magic
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> singleNumber(vector<int> nums){
        vector<int> res;
        int num1, num2;
        unsigned int Xor=nums[0], set_bit;

        for(int i=1; i<nums.size(); i++)
            Xor = Xor^nums[i];
        
        set_bit = Xor &(~(Xor-1));

        for(int i=0; i<nums.size(); i++){
            if(nums[i]&set_bit)
                num1 ^= nums[i];
            else
                num2 ^= nums[i];
        }

        int big, small;
        if(num1>num2){
            big = num1;
            small = num2;
        } else{
            big = num2;
            small = num1;
        }

        res.push_back(small);
        res.push_back(big);
        return res;
}

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    a.push_back(12);
    a.push_back(20);

    vector<int> res = singleNumber(a);

    cout << res[0] << " " << res[1];

    return 0;
}
