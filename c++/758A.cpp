#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll n, maxVal, add, ans = 0;
    cin >> n;
    vector <int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater());    // desc to asc order sorting
    maxVal = v[0];
    for (int i = 0; i < n; i++){
        if (v[i] < maxVal){
            add = maxVal - v[i];
            ans += add;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
