#include <iostream>
using namespace std;

/*concept behind this calculation is the formula of combination check in the copy.*/
int calculateCombination(int n, int r)
{
    long long result = 1;
    for (int i = 0; i < r; i++)
    {
        result = result * (n - i) / (i + 1);
    }
    return result;
}

int main()
{
    // question link -> https://leetcode.com/problems/pascals-triangle-ii/description/?envType=daily-question&envId=2023-10-16
    cout << calculateCombination(3, 3) << endl;
    return 0;
}