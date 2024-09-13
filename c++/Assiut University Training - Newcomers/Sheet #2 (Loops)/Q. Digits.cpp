#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long 

void solve()
{
    ll in;
    cin >> in;
    string s = to_string(in);
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
