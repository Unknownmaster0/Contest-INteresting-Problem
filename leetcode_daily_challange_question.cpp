// question link -> 
// https://leetcode.com/problems/k-th-symbol-in-grammar/submissions/1083622139/?envType=daily-question&envId=2023-10-25
#include<iostream>
using namespace std;

// tough question uses the recursion concept.

int kthGrammar(int n, int k)
{
    // for row == 1, the value will always be '0'
    if(n == 1)
        return 0;

    // calculating the length of the n-1 th row.
    int length = 1 << (n-2);

    // if the k lies in the first half of the row, then it same in the n-1 th row.
    if( k <= length )
        return kthGrammar(n-1,k);

// when the k lies in the rest half of the row.
    else
        return 1-kthGrammar(n-1, k-length);
}

/*
// Brutforce but show the Time Limit Exist.
    int kthGrammar(int n, int k) {
        vector<string> str;
        str.push_back("0");

        for (int i = 1; i < n; i++) {
            string s;
            for (char c : str[i - 1]) {
                if (c == '0') {
                    s += "01";
                } else {
                    s += "10";
                }
            }
            str.push_back(s);
        }

        return str[n - 1][k - 1] - '0';
    }
*/

int main()
{
    
    return 0;
}