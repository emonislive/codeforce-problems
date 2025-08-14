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
    ll alice, bob;
    cin >> alice >> bob;

    ll sum = alice + bob;

    if (sum % 2 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}

int main()
{
    fastIO();
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}
