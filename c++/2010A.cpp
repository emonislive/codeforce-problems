#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int n)
{
    vector <int> v;
    int ans = 0, in;
    for (int i = 0; i < n; i++) {
        cin >> in;
        v.push_back(in);
    }
    /* 
    vector postion       : +0 -1 +2 -3 +4  ( following this pattern, even position values are positive & odd position values are negative )
    value                :  1  2  3  4  5  
    */        
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            ans += v[i];
        else
            ans -= v[i];
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
