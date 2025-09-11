#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int k, int x)
{
    while (k--)
    {
        x *= 2;
    }
    cout << x << endl;
}

int main()
{
    fastIO();
    int tt, k, x;
    cin >> tt;
    while (tt--)
    {
        cin >> k >> x;
        solve(k, x);
    }
    return 0;
}
