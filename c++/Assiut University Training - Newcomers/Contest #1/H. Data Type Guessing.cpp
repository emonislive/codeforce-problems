#include <iostream>
using namespace std;
#define ll long long

void solve(ll n, ll k, ll a)
{
    ll mod = (n * k) % a;
    if (mod != 0)
        cout << "double";
    else {
        ll type = (n * k) / a;
        if (type >= -2147483648 && type <= 2147483647)
            cout << "int";
        else
            cout << "long long";
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, a;
    cin >> n >> k >> a;
    solve(n, k, a);
    return 0;
}
