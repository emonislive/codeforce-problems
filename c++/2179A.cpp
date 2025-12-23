#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a * b + 1 << endl;
}

int main() {
    fastIO();
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
