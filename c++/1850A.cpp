#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    int x = a + b, y = a + c, z = b + c;
    int ans = max(x, max(y, z));
    if (ans >= 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
