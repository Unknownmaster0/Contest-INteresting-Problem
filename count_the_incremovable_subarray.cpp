// Question link -> https://leetcode.com/contest/biweekly-contest-120/problems/count-the-number-of-incremovable-subarrays-i/
/*
Count the Number of Incremovable Subarrays I
You are given a 0-indexed array of positive integers nums.

A subarray of nums is called incremovable if nums becomes strictly increasing on removing the subarray. For example, the subarray [3, 4] is an incremovable subarray of [5, 3, 4, 6, 7] because removing this subarray changes the array [5, 3, 4, 6, 7] to [5, 6, 7] which is strictly increasing.

Return the total number of incremovable subarrays of nums.

****Note that an empty array is considered strictly increasing.****

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,2,3,4]
Output: 10
Explanation: The 10 incremovable subarrays are: [1], [2], [3], [4], [1,2], [2,3], [3,4], [1,2,3], [2,3,4], and [1,2,3,4], because on removing any one of these subarrays nums becomes strictly increasing. Note that you cannot select an empty subarray.

Example 2:

Input: nums = [6,5,7,8]
Output: 7
Explanation: The 7 incremovable subarrays are: [5], [6], [5,7], [6,5], [5,7,8], [6,5,7] and [6,5,7,8].
It can be shown that there are only 7 incremovable subarrays in nums.

Example 3:

Input: nums = [8,7,6,6]
Output: 3
Explanation: The 3 incremovable subarrays are: [8,7,6], [7,6,6], and [8,7,6,6]. Note that [8,7] is not an incremovable subarray because after removing
*/

// Brutforce solution -> 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    return 0;
}
int incremovableSubarrayCount(vector<int>& nums) {
    /* Approach -> go and traverse all the subarray, and check for each subarray if the strictly increasing order is maintian after removing the subarray.
    if yes, then increment count, else go to next subarray.
    */
    int countSubarray = 0;
    for(int i = 0; i<nums.size(); i++)
    {
        for(int j = i; j<nums.size(); j++)
        {
            bool isIncreasing = true;
            int prev = -1; // any number which is smaller than every number of the nums vector.
            for(int k = 0; k < nums.size(); k++)
            {
                if(k >= i && k <= j)   
                    continue;
                else if(nums[k] <= prev)
                {
                    isIncreasing = false;
                    break;
                }
                prev = nums[k];
                /*
                else if(nums[k] > prev)
                {
                    isIncreasing = true;
                    prev = nums[k];
                }
                else{
                    isIncreasing = false;
                }
                */
            }
            if(isIncreasing)
                countSubarray++;
        }
    }
    return countSubarray;
}