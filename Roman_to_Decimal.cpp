#include <bits/stdc++.h>
using namespace std;

// Method 1
/*
int matching(string str,int index)
{
    char ch = str[index];
    switch(ch)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }

    // if not matching to any
    return -1;
}
int romanToDecimal(string &str) {

    int n = str.size();

    int ans = 0;

    for(int i = n-1; i>=0; i--)
    {
        int num = matching(str,i);
        if(i == n-1)
            ans += num;
        else
        {
            if(num >= ans || str[i] == str[i+1])
                ans += num;
            else
                ans -= num;
        }
    }

    return ans;
}
*/
// method 2 -> faster then the previous one.
int romanToDecimal(string &str)
{
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sum = 0;

    for (int i = 0; i < str.size(); i++)
    {
        /* if present value is less than the next value, then add the difference of current value
        ans the next value to the sum. */
        if (mp[str[i]] < mp[str[i + 1]] && i < str.size())
        {
            sum += (mp[str[i + 1]] - mp[str[i]]);
            i++;
        }
        else
            sum += mp[str[i]];
    }

    return sum;
}

int main()
{
    string str = "MCMIV";
    int convert = romanToDecimal(str);
    cout << convert << endl;
    return 0;
}