#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int a, b;
    char sign;
    cin >> a >> sign >> b;
    cout << a + b << endl;
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
