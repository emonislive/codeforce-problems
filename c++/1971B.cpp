#include <iostream>
using namespace std;
#define endl '\n'

void solve(int t)
{
    string s;
    cin >> s;
    string s2 = s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        swap(s[i], s[i + 1]);
    }
    if (s == s2)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}
