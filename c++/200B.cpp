#include <iostream>
#include <iomanip>
using namespace std;
#define endl '\n'
#define ld long double

void solve() {
    int n;
    cin >> n;
    ld in, sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> in;
        sum += in;
    }
    ans = sum / n;
    cout << fixed << setprecision(12) << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
