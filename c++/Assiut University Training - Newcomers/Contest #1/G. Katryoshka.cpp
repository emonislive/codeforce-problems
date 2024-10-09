#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(ll a, ll b, ll c) {
    ll miN = min(a, min(b, c));

    // If c is 0, the result is 0 because in every condition having value of c has to be more than 0 to execute.
    if (c == 0) {
        cout << 0 << endl;
        return;
    }

    // Apply the third condition
    a = (a - miN) / 2;
    b -= miN;
    c -= miN;

    /*
    For the second condition, we have effectively reduced the minimum value to 0
    by subtracting miN from all values. This ensures that the second condition is
    only applied if a, b, and c are all non-zero. and non zero entry doesn't exist.
    input range: 0 <= a,b,c <= 10^18
    */

    // Apply the first condition
    if (a <= c)
        cout << a + miN << endl;
    else
        cout << c + miN << endl;
}

int main() {
    optimize();
    ll a, b, c;
    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}
