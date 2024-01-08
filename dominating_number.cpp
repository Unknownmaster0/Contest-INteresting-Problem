#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// problem link -> https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-136/problems

int main()
{
    
    return 0;
}

/*
    approach -> we are first storing the frequency of the each elements in the map.
                then we bring all the frequency into the vector, now all the frequecy are unique.
                sort the freqency in descending order -> b/c we want minimum number of operations, then we need maximum frequency first.
                then we check if the current starting index of the vector is greater than n/2 or not.
                then we make the loop till the (sum < n/2) , in each iteration we increment the sum by the summation of current index value of the vector and increment the countof operation each time.
            

            finally return countof operation
*/

    int minOPs(int n, vector<int> &a)
    {
        unordered_map<int,int> freq;
        for(int i = 0; i<n; i++){
            freq[a[i]] ++;
        }
        
        vector<int> store;
        for(auto it:freq){
            store.push_back(it.second);
        }
        
        sort(store.begin(),store.end(), greater<int>());
        
        int ans = 0;
        int val = n/2 + 1;
        
        int temp = store[0];
        int i = 1;
        while(temp < val){
            ans ++;
            temp += store[i];
            i++;
        }
        
        return ans;
    }