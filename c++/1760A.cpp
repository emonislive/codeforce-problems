#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    vector<int> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec.begin(), vec.end());
    cout << vec[1] << endl;
}

int main()
{
    fastIO();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
