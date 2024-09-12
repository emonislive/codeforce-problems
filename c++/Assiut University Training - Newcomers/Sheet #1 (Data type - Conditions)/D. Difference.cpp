#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b, ll c, ll d)
{
    ll ans1 = a * b * 1ll;
    ll ans2 = c * d * 1ll;
    cout << "Difference = " << ans1 - ans2;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    solve(a, b, c, d);
    return 0;
}
