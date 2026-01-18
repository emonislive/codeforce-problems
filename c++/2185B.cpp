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
    int maxVal{};
    vector<int> arr(n);
    for (auto& in : arr) {
        cin >> in;
        if (maxVal < in)
            maxVal = in;
    }
    cout << maxVal * n << endl;
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
