#include <bits/stdc++.h>
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
    string number;
    cin >> number;
    sort(number.begin(), number.end()); // sorting in asc-desc order to get the smallest number at position 0 of the string. 
    cout << number[0] << endl;
}

int main()
{
    fastIO();
    ll testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
