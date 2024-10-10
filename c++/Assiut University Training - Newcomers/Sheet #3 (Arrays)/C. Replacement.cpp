#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve()
{
    int n, in;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (in == 0)
            v.push_back(0);
        else if (in < 0)
            v.push_back(2);
        else if (in > 0)
            v.push_back(1);
    }
    for (int ans : v)
        cout << ans << " ";
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
