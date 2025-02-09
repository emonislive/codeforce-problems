#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 2)
        {
            if (s.substr(i, 2) == "us")
                cout << "i";
            break;
        }
        else
            cout << s[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
