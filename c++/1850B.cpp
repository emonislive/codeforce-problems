#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    int len, quality, c = 0, max = 0;
    for (int i = 1; i <= n; i++) {
        cin >> len >> quality;
        /*
            first we check if length is equal or less than 10.
            after that we check if the quality of that length is the largest one or not amongst other.
        */
        if (len <= 10) {
            if (quality > max) {
                max = quality;
                c = i;
            }
        }
    }
    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
