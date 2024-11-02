#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll number)
{
    if (number < 2)
    {
        cout << "NO" << endl;
        return;
    }
    ll flag = 0;
    for (ll i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll number;
    cin >> number;
    solve(number);

    return 0;
}
