#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s)
{
    // i am a lazzzzy parson, just added some hard code. it just compares the s[0 1 2] index characters. hehe
    if (s[0] == 'Y' || s[0] == 'y')
    {
        if (s[1] == 'E' || s[1] == 'e')
        {
            if (s[2] == 'S' || s[2] == 's')
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        solve(s);
    }
    return 0;
}
