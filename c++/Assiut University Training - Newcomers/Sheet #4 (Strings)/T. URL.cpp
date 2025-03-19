#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(string &s)
{
    string username, pwd, profile, role, key;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i, 9) == "username=")
        {
            i += 9;
            while (i < s.size() && s[i] != '&')
            {
                username.push_back(s[i]);
                i++;
            }
        }
        else if (s.substr(i, 4) == "pwd=")
        {
            i += 4;
            while (i < s.size() && s[i] != '&')
            {
                pwd.push_back(s[i]);
                i++;
            }
        }
        else if (s.substr(i, 8) == "profile=")
        {
            i += 8;
            while (i < s.size() && s[i] != '&')
            {
                profile.push_back(s[i]);
                i++;
            }
        }
        else if (s.substr(i, 5) == "role=")
        {
            i += 5;
            while (i < s.size() && s[i] != '&')
            {
                role.push_back(s[i]);
                i++;
            }
        }
        else if (s.substr(i, 4) == "key=")
        {
            i += 4;
            while (i < s.size() && s[i] != '&')
            {
                key.push_back(s[i]);
                i++;
            }
        }
    }
    cout << "username: " << username << endl;
    cout << "pwd: " << pwd << endl;
    cout << "profile: " << profile << endl;
    cout << "role: " << role << endl;
    cout << "key: " << key << endl;
}

int main()
{
    fastIO();
    string s;
    cin >> s;
    solve(s);
    return 0;
}
