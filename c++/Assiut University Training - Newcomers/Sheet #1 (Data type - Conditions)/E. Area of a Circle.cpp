#include <iostream>
#include <iomanip>
using namespace std;
#define endl '\n'
#define ld long double

void solve(ld pie, ld r)
{
    ld mul = r * r;
    ld ans = mul * pie;
    cout << fixed << setprecision(9) << ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    const ld pie = 3.141592653;
    ld r;
    cin >> r;
    solve(pie, r);
    return 0;
}
