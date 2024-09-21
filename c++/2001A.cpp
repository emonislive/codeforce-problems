#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int n) {
    vector <int> v;
    int c = 1, max = 0;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i + 1]) {
            c++;
        }
        else {
            if (max < c) {
                max = c;
            }
            c = 1;
        }
    }
    if (c > max)
        max = c;

    cout << n - max << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
