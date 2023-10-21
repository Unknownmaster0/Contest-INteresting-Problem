#include<bits/stdc++.h> 
using namespace std; 

// mathematics releated question.

long long sumOfDivisors(int N)
{
    long long sum = N;
    // Basic approach -> O(N^2) time complexity.
    /*
    for(int i = 1; i<=N; i++)
    {
        for(int k = 2; k<=i; k++)
        {
            if(i % k == 0)
                sum += k;
        }
    }
    */
    
    // Optimal approach -> O(N) time complexity.
    /*
    concept -> 
                checking that how many times till N, the number 1 to N-1 comes in way 
                by dividing that number(1 to N-1) with N
                
                example -> how many times 2 comes in N=4;
                
                so, 4/2 = 2, thus, 2 comes twice.
                    4/3 = 1, thus, 3 comes once.
                    4/4 = 1, thus, 4 comes once.
    */
    for(int i = 2; i<=N; i++)
    {
        int temp = N / i;
        
        sum += (temp * i);
    }
    
    return sum;
}


int main()
{

    return 0;
}
