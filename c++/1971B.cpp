#include <iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve(string s)
{
    string s2 = s;
    int c = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
    }
    if (c == s.length())
    {
        cout << "NO" << endl;
    }
    else
    {
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
}

int main()
{
    optimize();
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        solve(s);
    }
    return 0;
}
