#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
void solve(ll a, ll b)
{
    ll sum = 0;
    if (a > b)
        swap(a, b);
    if (a % 2 == 0) {
        for (ll i = a + 1; i < b; i += 2) {
            sum += i;
        }
    }
    else {
        for (ll i = a + 2; i < b; i += 2) {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
