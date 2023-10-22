#include<iostream>
#include<vector>
using namespace std;

// new thing learn -> sliding window technique.
int maximumScore(vector<int>& nums, int k) {
    
    /* Initialising two pointer -> left = k , right = k; we need two more variable 
        min_value = (having the min value in the window, and max_score = (defines the  maximum score of the window.))*/

    // Using the sliding-window technique.

    int left = k;
    int right = k;
    int min_value = nums[k];
    int max_score = min_value;

    while(left > 0 || right < nums.size()-1)
    {
        // updating the window of the sub-array.
        if(left == 0)
            right++;
        else if(right == nums.size()-1)
            left --;
        else if(nums[left-1] > nums[right+1])
            left--;
        else
            right++;

// calculating the minimum value.
        min_value = min(min_value, min(nums[left],nums[right]));

        // length of the window = right-left+1;
        max_score = max(max_score, min_value * (right-left+1));
    }

    return max_score;
}

int main()
{
    // question link -> https://leetcode.com/problems/maximum-score-of-a-good-subarray/?envType=daily-question&envId=2023-10-22
    return 0;
}