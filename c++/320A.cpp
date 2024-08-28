#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s)
{
    int ans = 1, i = 0;
    while (i < s.length())
    {
        if (i + 2 < s.length() && s.substr(i, 3) == "144")
            i += 3;
        else if (i + 1 < s.length() && s.substr(i, 2) == "14")
            i += 2;
        else if (s[i] == '1')
            i++;
        else
        {
            ans = 0;
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    solve(s);

    return 0;
}
