#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n) {
    string s(n, ' ');
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    if (s.front() != s.back())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
