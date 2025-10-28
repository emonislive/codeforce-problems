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
    ll n;
    string a, b;
    
    cin >> n >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if (a == b)
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
