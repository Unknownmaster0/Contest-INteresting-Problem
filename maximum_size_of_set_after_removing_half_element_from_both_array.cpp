#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        unordered_set<int>s1, s2;

        for(auto it:nums1){
            s1.insert(it);
        }
        for(auto it:nums2){
            s2.insert(it);
        }

        // finding the common elements .
        int c = 0;
        for(auto itr:s1){
            if(s2.find(itr) != s2.end()){
                c++;
            }
        }
        
        int firstsize = s1.size()-c; // size of set1 after removing the common element
        firstsize = min(firstsize, n/2); // to get the minimum elements.

        int secondsize = s2.size() - c;
        secondsize = min(secondsize, n/2);

        return min(firstsize + secondsize + c, n);
    }

int main()
{
    
    return 0;
}