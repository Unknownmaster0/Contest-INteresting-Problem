/*
Question -> https://leetcode.com/contest/weekly-contest-361/problems/count-symmetric-integers/

You are given two positive integers low and high.
An integer x consisting of 2 * n digits is symmetric if the sum of the first n digits of x is equal to the sum of the last n digits of x. Numbers with an odd number of digits are never symmetric.
Return the number of symmetric integers in the range [low, high].

Input: low = 1, high = 100
Output: 9
Explanation: There are 9 symmetric integers between 1 and 100: 11, 22, 33, 44, 55, 66, 77, 88, and 99.

*/

#include <iostream>
using namespace std;

int countSymmetricIntegers(int low, int high)
{
    int cnt = 0;

    for (int i = low; i <= high; i++)
    {

        string s = to_string(i);

        // if the length of the number is odd.
        if (s.size() & 1)
            continue;

        int sum = 0;
        for (int j = 0; j < s.size(); j++)
        {

            if (2 * j < s.size())
                sum += s[j] - '0'; // here '0' is done to make the string number to convert in decimal number.
            // example -> 1 is stored in string in its Ascii value form, thus to assign it to sum, we substract '0' to it.

            // now in else -> if the 2 * j is greater than the s.size() or number of digits in that number, then decrease the sum.
            else
                sum -= s[j] - '0';
        }
        if (sum == 0)
            cnt += 1;
    }
    return cnt;
}

int main()
{
    int low = 1200;
    int high = 1230;

    cout << countSymmetricIntegers(low, high) << endl;
    return 0;
}