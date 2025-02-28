#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll num, divisor;
    cin >> num >> divisor;

    if (num % divisor == 0) {
        cout << 0 << endl;
        return;
    }

    ll quotient = num / divisor;
    ll nextMultiple = (quotient + 1) * divisor;
    ll difference = nextMultiple - num;

    cout << difference << endl;
}

int main() {
    fast_io();
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}

/*
 ! num = 100, divisor = 13
 ? 100 % 13 != 0
 ? div = 100 / 13 = 7
 ? pls = (7+1) * 13 = 104
 ? 104 - 100 = 4
 ! Output: 4
 */
