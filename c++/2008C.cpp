#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll left, ll right)
{
    ll plus = 1, c = 0;
    while (left <= right)
    {
        // value:      10   11    13    16    20    25(loop stops)
        // ex. 10--20, 10, 10+1, 11+2, 13+3, 16+4, 20+5, (25>right so we don't count 25)
        // count:       1    2    3     4      5        (value of c)
        left += plus;
        plus++;
        c++;
    }
    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t, left, right;
    cin >> t;
    while (t--)
    {
        cin >> left >> right;
        solve(left, right);
    }
    return 0;
}
