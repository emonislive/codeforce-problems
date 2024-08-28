#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int n, int m)
{
    ll ans, ans2, c = 0;
    /*
            to verify this formula
            a^2 + b = n
            a + b^2 = m
    */
    for(int i = 0; i <= n; i++){            // loop for a
        for(int j = 0; j <= m; j++){        // loop for b
            ans = (i*i) + j * 1ll;          // a^2 + b
            ans2 = i + (j*j) * 1ll;         // a + b^2
            if (ans == n && ans2 == m)
                c++;
        }
    }
    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    solve(n, m);

    return 0;
}
