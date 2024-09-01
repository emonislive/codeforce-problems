#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    int ans = 0, ans2 = 0;
    for (int i = 1; i <= a; i++)
    {
        ans += 1;
    }
    for (int i = 1; i <= b; i++)
    {
        ans2 += 2;
    }
    // cout << ans << " " << ans2 << endl;
    // if 
    if (a == 0)
    {
        if (b % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (b == 0){
        if (a % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if (ans % 2 == 0 && ans2 % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        solve(a, b);
    }

    return 0;
}
