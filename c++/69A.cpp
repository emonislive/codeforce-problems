#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll tt) {
    ll a, b, c;
    ll x = 0, y = 0, z = 0;
    ll sum = 0;
    while (tt--) {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
        sum += a + b + c;
    }

    if (x == y && y == z && sum == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tt;
    cin >> tt;
    solve(tt);
    return 0;
}
