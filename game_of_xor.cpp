#include<iostream>
using namespace std;

// problem link -> https://www.geeksforgeeks.org/problems/game-of-xor1541/1

int gameOfXor(int n , int a[]) {
    
    /* Approch -> if we find the all the subarray, then we can find all the xor of the subarrays and finally return the result.
                    But finding all the subarray will cost -> O(N^2) time
                    
                    ***** important *********
                    Thus, we find frequency of particular element in all the subarrays. 
Frequency of particular element in all subarray === (i+1) * (n-i) [where i is the position of the element in array]
                    
                    ********** imporatant. ***********
                    Then we check whether the frequency of the element is odd or even,
                    because if the even number of times the element appear then it will make its xor 0.
                    but when it will appear odd number of times then it will make its xor = element itself value.
*/
    
    int res = 0;        
    for(int i = 0; i<n; i++)
    {
        // storing the frequency of the element 
        int freq = (i+1) * (n-i);
        
        // if the freqeuency of the element is odd, then only we need to xor the element to the result.
        if(freq % 2 != 0)
        {
            res ^= a[i];
        }
        
        // but when the frequency is even, then the elements make pair with itself and xor of the same element is 0.
    }
    return res;
}


int main()
{
    
    return 0;
}