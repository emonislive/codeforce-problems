#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve()
{
    vector<int> v;
    int in, midVal, ans, i;
    for (i = 0; i < 3; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    midVal = v[1];
    ans = abs(v[0] - midVal) + abs(v[1] - midVal) + abs(v[2] - midVal);
    cout << ans << endl;
}

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
