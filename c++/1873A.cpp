#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s)
{
    string s2 = "abc";
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s2[i])
            c++;
    }
    if (c == 3)
        cout << "No" << endl;
    else    
        cout << "Yes" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
