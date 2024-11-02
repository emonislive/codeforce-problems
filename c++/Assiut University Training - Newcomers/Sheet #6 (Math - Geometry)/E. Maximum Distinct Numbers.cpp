#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll number)
{
    ll sum = 0, count = 0;
    for (ll i = 1; i <= number; i++)
    {
        sum += i;
        if (sum <= number)
            count++;
        else
            break;
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    ll number;
    cin >> number;
    solve(number);

    return 0;
}
