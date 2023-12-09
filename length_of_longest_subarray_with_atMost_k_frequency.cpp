#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//question link -> https://leetcode.com/contest/biweekly-contest-119/problems/length-of-longest-subarray-with-at-most-k-frequency/ 

int maxSubarrayLength(vector<int>& nums, int k) {
     
    unordered_map<int,int>mp;
    int start = 0,maxSize = 0;
    
    for(int i = 0; i<nums.size(); i++)
    {
        mp[nums[i]]++;
        
        while(mp[nums[i]] > k)
            mp[nums[start++]]--;
        
        maxSize = max(maxSize, i-start + 1);
    }
    
    return maxSize;
}

int main()
{
    
    return 0;
}