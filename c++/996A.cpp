#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    ll balance, one, five, ten, twenty, hundred;
    ll minimumBills;

    cin >> balance;

    hundred = balance / 100;
    balance -= (hundred * 100);

    twenty = balance / 20;
    balance -= (twenty * 20);

    ten = balance / 10;
    balance -= (ten * 10);

    five = balance / 5;
    balance -= (five * 5);

    one = balance;
    minimumBills = one + five + ten + twenty + hundred;

    cout << minimumBills << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
