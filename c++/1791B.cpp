#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll n) {
    string s;
    char ch;
    for (ll i = 0; i < n; i++) {
        cin >> ch;
        s.push_back(ch);
    }

    ll l = 0, r = 0;
    bool flag = false;
    for (auto in : s) {
        switch (in) {
        case 'U':
            r++;
            break;
        case 'D':
            r--;
            break;
        case 'R':
            l++;
            break;
        case 'L':
            l--;
            break;
        }
      
        if (r == 1 && l == 1)
            flag = true;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fast_io();
    ll tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
