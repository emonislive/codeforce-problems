#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size{};
    string s;

    cin >> size;
    cin >> s;

    bool flag_25 = false, flag_26 = false;
    for (int i = 0; i + 3 < size; i++) {
        if (s.compare(i, 4, "2025") == 0) flag_25 = true;
        if (s.compare(i, 4, "2026") == 0) flag_26 = true;
    }
    if (flag_25 && !flag_26)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
