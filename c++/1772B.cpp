#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int operation{ 5 };
    bool flag = false;
    while (operation--) {
        if (a < b && a < c && b < d && c < d) {
            flag = true;
            break;
        }
        int tmp1{ a }, tmp2{ b }, tmp3{ c }, tmp4{ d };
        a = tmp3;
        b = tmp1;
        c = tmp4;
        d = tmp2;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
