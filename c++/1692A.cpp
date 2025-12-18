#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int a, b, c, d;
    int count{0};
    cin >> a >> b >> c >> d;
    if (a < b) count++;
    if (a < c) count++;
    if (a < d) count++;
    cout << count << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
