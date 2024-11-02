#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b)
{
    ll even = 0, odd = 0;

    if (a > b)
        swap(a, b);

    for (ll i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    ll totalSum = even + odd;

    cout << totalSum << endl;
    cout << even << endl;
    cout << odd << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    solve(a, b);

    return 0;
}
