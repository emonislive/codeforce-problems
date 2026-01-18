#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    ll n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
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
