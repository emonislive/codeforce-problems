#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(vector<ll> v) {
    ll ans = 0;
    for (ll i = 0; i < v.size(); i++) {
        ans += v[i];
    }
    cout << abs(ans) << endl;
}

int main() {
    optimize();
    vector<ll>v;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll in;
        cin >> in;
        v.push_back(in);
    }
    solve(v);
    return 0;
}
