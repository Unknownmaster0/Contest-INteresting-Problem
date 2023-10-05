#include <iostream>
#include <set>
using namespace std;

/*Question link -> https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-122/problems*/

/* Method 1 to solve this problem -> Brutforce.
bool equality(int N, string str)
{
    for(int i = 0; i < N-1; i++)
    {
        if(str[i] != str[i+1])
            return 0;
    }
    return 1;
}

void makeEqual(int N, string &str, char make, char rem)
{
    for(int i = 0; i<N; i++)
    {
        if(str[i] == rem)
        {
            str[i] = make;
        }
    }
}

int solve(int N, string S) {

    //  We need to make the string have only one character only.
    int count = 0;
    for(int i = 1; i<N; i++)
    {
        if(S[i] != S[i-1])
        {
            makeEqual(N, S,S[i-1],S[i]);
            count++;
        }

        if(equality(N,S) == 1)
            break;
    }

    return count;
}
*/

/*Method 2 -> */
int solve(int n, string s)
{
    set<char> st;
    for (auto i : s)
    {
        st.insert(i);
    }
    return st.size() - 1;
}

int main()
{
    string str = "abcabc";
    int ans = solve(str.size(), str);
    cout << "ans -> " << ans << endl;
    return 0;
}