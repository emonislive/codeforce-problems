#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    if (a > b)
        cout << b << " " << a << endl;
    else
        cout << a << " " << b << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
