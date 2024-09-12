#include <iostream>
using namespace std;
#define ll long long

void solve(ll a, ll b, ll k)
{
    if (a % k != 0 && b % k != 0)
        cout << "No One";
    if (b % k == 0 && a % k != 0)
        cout << "Momo";
    if (a % k == 0 && b % k != 0)
        cout << "Memo";
    if (a % k == 0 && b % k == 0)
        cout << "Both";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a, b, k;
    cin >> a >> b >> k;
    solve(a, b, k);
    return 0;
}
