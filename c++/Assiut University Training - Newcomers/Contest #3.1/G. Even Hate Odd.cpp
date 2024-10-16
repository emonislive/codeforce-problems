#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n) {
    int input, even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if (n % 2 != 0) {
            cout << -1 << endl;
            return;
        }
    int result;
    if (even == 0) {
        result = odd / 2;
    } 
    else if (odd == 0) {
        result = even / 2;
    } 
    else {
        if (even > odd) {
            result = (even - odd) / 2;
        } else {
            result = (odd - even) / 2;
        }
    }
    cout << result << endl; 
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
