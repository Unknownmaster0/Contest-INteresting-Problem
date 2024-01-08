#include<iostream>
#include<vector>
using namespace std;

// problem link -> https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/

int main()
{
    return 0;
}

    int minOperations(vector<int>& nums, int k) {

        int countopr = 0;
        for(int i = 0; i<32; i++)
        {
            int checkxor = 0;
            for(auto it:nums){
                // take the xor of the ith bit of the nums, and if it is not same to the ith bit of the k , then update the countOpr;
                
                checkxor = checkxor ^ ((it >> i) & 1 );
            }

            if(checkxor != ((k >> i) & 1))   countopr ++;
        }
        return countopr;
    }