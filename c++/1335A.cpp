#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    ll number{}, split{};

    cin >> number;
    if (number % 2 == 0) {
        split = number / 2;
        if (split != 0)
            split--;
    }
    else
        split = number / 2;

    cout << split << endl;
}

int main() {
    fastIO();
    int tc;

    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
