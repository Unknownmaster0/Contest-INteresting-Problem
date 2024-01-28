#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

// https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/description/

    int maximumLength(vector<int>& nums) {
        
        int res = -1;
        map<long long,long long> mp;
        unordered_map<long long,bool> vis;

        for(auto it:nums) mp[it] ++;

        for(auto it:mp){

            long long curr = it.first;
            long long freq = it.second;

            int count = 1;

            // if it is already vis then continue;
            if(vis[curr]) continue;

// else visit the current.
            vis[curr] = 1;

            // check if curr is 1 or not.
            if(curr ==1 ){
                count = freq;

// if 1 is present in even length, then final count = freq -1
// else if odd then count = freq;
                if(freq % 2 == 0)   count = freq -1 ;
                else 
                    count = freq;

                res = max(res, count);
                continue;
            }

            while(freq > 1){
                long long next = curr * curr;
                if(mp.find(next) != mp.end()){
                    curr = next;
                    vis[curr] = 1;
                    freq = mp[next];
                }
                else
                    break;
                ++count;
            }
            res = max(res, 2 * count - 1);
        }
        return res;
    }

int main()
{
    
    return 0;
}