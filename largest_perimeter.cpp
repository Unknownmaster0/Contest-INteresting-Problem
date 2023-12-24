// one way of doing this -> iterating over the array from the left to right, but my approach gone from right to left.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    
    return 0;
}
/*
// iterating over the arrry from left to right.
long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        long long sum = nums[0] + nums[1];
        long long ans = -1;
        for(int i = 2;i<nums.size();++i) {
            if(sum > nums[i]) {
                ans = sum + nums[i];
            }
            sum = nums[i] + sum;
        }
        return ans;
    }
*/


// my approach usage the iterating over the array from right to left, I have sorted the array in descending order.
long long largestPerimeter(vector<int>& nums) {
    sort(nums.begin(),nums.end(),greater<int>());
    
    // now the nums has element in descending order.
    long long int totalSum = 0;
    // calculate the total sum of the nums;
    for(int i = 0 ;i<nums.size(); i++)
    {
        totalSum += nums[i];
    }
    
    // itertate over the nums again by checking if the particular side can be in the polygon or not, if any side from back is satisfy the polygon
    // property of longest side, then it should be your maximum perimeter. b/c auur aage jane pr to value ghat rhe honge na, and thus perimeter bhi ghatega.
    int i = 0;
    while(i < nums.size())
    {   
        totalSum -= nums[i];
        if(totalSum > nums[i])
            return totalSum + nums[i];
        i++;
    }
    return -1;
}