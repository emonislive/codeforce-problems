#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size{};
    cin >> size;
    vector <int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    if (arr[0] == arr[size - 1] && arr[0] == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
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
