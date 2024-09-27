#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

void solve() {
    ll a, b, n, c = 0;
    cin >> a >> b >> n;
    for (ll i = 0; ;i++) {
        if (a > b) {
            b += a;
            c++;
        }
        else {
            a += b;
            c++;
        }
        if (a > n || b > n) {
            cout << c << endl;
            break;
        }
    }
}

int main() {
    op();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
