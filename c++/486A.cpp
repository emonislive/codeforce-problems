#include <iostream>
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
    ll num;
    cin >> num;

    ll ans;
    if (num % 2 == 0)
        ans = num / 2;
    else
        ans = -(num + 1) / 2;

    cout << ans << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
