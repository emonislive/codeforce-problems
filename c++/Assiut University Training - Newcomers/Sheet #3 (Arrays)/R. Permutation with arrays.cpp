#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n) {
    vector<int> v(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++) {
        if (v[i] != v2[i]) {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}

int main() {
    optimize();
    int n;
    cin >> n;
    solve(n);
    return 0;
}
