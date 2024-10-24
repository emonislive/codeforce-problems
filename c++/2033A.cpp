#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll in) {
    ll c = 0;
    for (ll i = 1; i <= in; i++) {
        if (i % 2 != 0)
            c = 1;
        else
            c = 2;
    }
    if (c == 2)
        cout << "Sakurako" << endl;
    else if (c == 1)
        cout << "Kosuke" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t, in;
    cin >> t;
    while (t--) {
        cin >> in;
        solve(in);
    }
    return 0;
}
