#include <iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

void solve(ll n)
{
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll c = 1, max = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1]) {
            c++;
        }
        else
        {
            if (c > max) {
                max = c;
            }
            c = 1;
        }
    }
    if (c > max) {
        max = c;
    }
    cout << max << endl;
}

int main()
{
    optimize();
    ll n;
    cin >> n;
    solve(n);
    return 0;
}
