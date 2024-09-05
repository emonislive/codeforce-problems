#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll x, ll y, ll n)
{
    ll rem = n % x, diff;               //ex. 7(x) 5(y) 12345(n), rem = 12345 % 7 = 4
    if (rem >= y)                       // condition 1,  4 >= 5 (no) go to condition 2
    {
        diff = rem - y;
        cout << n - diff << endl;
    }
    else                                // condition 2
    {
        n = n - (rem + 1);              // 12345(n), 12345 - (4+1) = 12340
        rem = n % x;                    // 12340 % 7 = 6
        if (rem >= y)                   // 6 >= 5 (yes)
        {
            diff = rem - y;             // 6 - 5 = 1
            cout << n - diff << endl;   // 12340 - 1 = 12339 (ans)
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    ll x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        solve(x, y, n);
    }
    return 0;
}
