#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, char ch, ll b) {
    ll ans;

    if (ch == '+')
        ans = a + b;
    else if (ch == '-')
        ans = a - b;
    else if (ch == '*')
        ans = a * b;
    else if (ch == '/')
        ans = a / b;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b;
    char ch;
    cin >> a >> ch >> b;
    solve(a, ch, b);
    return 0;
}
