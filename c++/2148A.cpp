#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int number, sequence;
    cin >> number >> sequence;
    if (sequence % 2 == 0)
        cout << 0 << endl;
    else
        cout << number << endl;
}

int main()
{
    fastIO();
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
