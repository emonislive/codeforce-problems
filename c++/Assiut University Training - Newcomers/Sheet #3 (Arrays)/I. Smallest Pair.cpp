#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    ll ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int tot = v[i] + v[j] + (j + 1) - (i + 1);
            if (tot < ans)
                ans = tot;
        }
    }
    cout << ans << endl;
}

int main() {
    optimize();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
