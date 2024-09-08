#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s)
{
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {                        // c = 0  1 2 1 0 1 
        if (c && s[i] =='B')    // ex. A A B B A
            c--;                //     1 2 1 0 1 ans = 1
        else                    // if c = 0 then theres no point of c-- because the pattern AB/BB requires atleast 1 character before the 2nd to check the pattern
            c++;                // ex. BAB = if we count from 0 then it will be like this (B A B -> -1 0 -1) but ans is 1 because B (AB) AB matches the pattern but not the B.
    }
    cout << c << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
