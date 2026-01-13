#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    if (n < 4)
        cout << n << endl;
    else {
        if (n % 2 != 0) {
            int a = n / 2;
            int b = a + 1;
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
}

int main() {
    fastIO();
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
