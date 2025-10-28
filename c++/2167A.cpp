#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
  
    if (a == b && b == c && c == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
