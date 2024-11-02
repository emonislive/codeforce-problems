#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

ll solve(ll a, ll b)
{
    ll sum = 0, mul = 1;
    for (ll i = 2; i <= b; i += 2)
    {
        for (int j = 0; j < i; j++) // pow(a,b)
        {
            mul *= a;
        }
        sum += mul;
        mul = 1;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a, b;
    cin >> a >> b;
    cout << solve(a, b) << endl;

    return 0;
}
