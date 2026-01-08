#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size;
    cin >> size;

    vector<ll> arr(size);
    ll total{};

    for (auto& in : arr) {
        cin >> in;
        total += in;
    }
    if (total % 2 == 0) {
        cout << total << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    for (auto data : arr) {
        if (data % 2 != 0) {
            total -= data;
            break;
        }
    }
    cout << total << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
