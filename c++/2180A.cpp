#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int l, a, b;
    cin >> l >> a >> b;
    int output{}, maxVal{};
    for (int i{}; i < l; i++) {
        output = (a + (i * b)) % l;
        maxVal = max(maxVal, output);
    }
    cout << maxVal << endl;
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
