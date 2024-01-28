#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// problem link -> https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-139/problems

    int maximumBattalions(int N, vector<string> &names) {
        
        unordered_map<string, int> endidx;
        
        // store the endidx of every string in the names.
        for(int i = 0; i<N; i++)
            endidx[names[i]] = i;
        
        int finish = 0, batallions = 0;
        
// while iterating over names, store the finish idx of every string and when we reach the finish as same as curr, then increment batallions.
// when curr == finish then (there is one batallion).
        for(int curr = 0; curr < N; curr ++)
        {
            finish = max(endidx[names[curr]], finish);
            
            if(curr == finish)
                batallions++;
        }
        
        return batallions;
    }

int main()
{
    
    return 0;
}