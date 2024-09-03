#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    int tmp, tmp2 = 0, ans;
    tmp = a;
    for (int i = a; i <= b; i++)
    {
        if (tmp < i)
            tmp = i;
        else
        {
            ans = (tmp - a) + (b - tmp);
            if (tmp2 < ans)
                tmp2 = ans;
        }
    }
    cout << tmp2 << endl;
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
