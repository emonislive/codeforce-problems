#include <iostream>
using namespace std;
#define endl '\n'

void solve(int tt) {
    int leftover = 0, out, in, maxCap = INT_MIN;
    while (tt--) {
        cin >> out >> in;
        leftover += in - out;
        maxCap = max(maxCap, leftover);
    }
    cout << maxCap << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    solve(tt);
    return 0;
}
