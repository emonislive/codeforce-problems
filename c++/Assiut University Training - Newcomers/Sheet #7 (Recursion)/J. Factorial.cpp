#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll num, ll factorial)
{
    if (num < 2)
    {
        cout << factorial << endl;
        return;
    }
    factorial *= num;
    solve(num - 1, factorial);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll num, factorial = 1;
    cin >> num;
    solve(num, factorial);

    return 0;
}
