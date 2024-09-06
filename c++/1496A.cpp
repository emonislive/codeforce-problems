#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

void solve(int n, int k, string s)
{
    bool check = true;
    for (int i = 0; i < k; i++)
    {
        if (s[i] != s[n - 1 - i]) 
        {
            check = false;
            break;
        }
    }
    if (check == true && 2 * k < n) // 2* k = to check if the string that is palindrom does takes the whole n size or not, if yes then ans will be no
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t, n, k;
        string s(n, ' '); // assigning string size n with whitespace
        string s2(n, ' ');
        cin >> t;
        while (t--)
        {
            cin >> n >> k;
            cin >> s;
            solve(n, k, s);
        }
        return 0;
    }
