#include <iostream>
using namespace std;
#define endl '\n'
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int lilyPads, alice, bob;
    cin >> lilyPads >> alice >> bob;

    int diff = abs(alice - bob);
    if (diff % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fast_io();
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
