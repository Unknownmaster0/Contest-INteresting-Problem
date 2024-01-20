#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// problem link -> https://leetcode.com/contest/biweekly-contest-122/problems/find-if-array-can-be-sorted/

/* approach -> 
        1. first store the final thing that we need to do, the sorted array of the given array.
        2. Now, check if the adjacent element have same set bit or not, 
                if yes, then store the idx till where the setbit count is equal, then compare that part with the sorted nums that has stored already
        3. if the adjacent element have no same set bit, then simply continue
*/

    bool check(vector<int> nums, vector<int>& snums, int i, int j){
        sort(nums.begin()+ i, nums.begin()+j+1);
        while(i <= j){
            if(nums[i] != snums[i]) return false;
            i++;
        }
        return true;
    }

    bool canSortArray(vector<int>& nums) {
        
        vector<int> sortednums = nums;
        sort(sortednums.begin(), sortednums.end());
        
        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
            int j = i;
            while(j+1 < n && __builtin_popcount(nums[j]) == __builtin_popcount(nums[j+1])){
                // cnt setbit of nums[i];
                j++;
            }

            if(!check(nums, sortednums, i, j)) return false;
            
            i = j;
        }
        return true;
    }

int main()
{
    
    return 0;
}