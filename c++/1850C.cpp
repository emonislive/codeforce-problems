#include <iostream>
using namespace std;
#define endl '\n'

void solve(int t)
{
    string s, ans;
    for (int i = 0; i < 8; i++) {
        cin >> s;
        for (int j = 0; j < 8; j++) {
            if (s[j] != '.') {
                ans.push_back(s[j]);
                break;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve(t);
    }
    return 0;
}
