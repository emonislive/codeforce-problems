#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(vector <ll>& v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    ll minNum = 4 - v.size();
    cout << minNum << endl;
}

int main() {
    fast_io();
    vector <ll> v(4);
    for (auto& in : v)
        cin >> in;

    solve(v);
    return 0;
}
