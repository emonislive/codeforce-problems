#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c) {
    int con1, con2, con3;

    con1 = a + b;
    con2 = b + c;
    con3 = a + c;

    if (con1 == c)
        cout << "YES" << endl;
    else if (con2 == a)
        cout << "YES" << endl;
    else if (con3 == b)
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
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
