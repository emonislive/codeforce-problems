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
    // if the iteration value is odd then these numbers can't be divided evenly ex. n = 3, (1 2 3) = even = 1, odd = 2.
    if (n % 2 != 0) {
            cout << -1 << endl;
            return;
        }

    int result;
    // this condition occurs if every single integers are rather even or odd. ex. n = 2, (4 4)
    if (even == 0) {
        result = odd / 2;
    } 
    else if (odd == 0) {
        result = even / 2;
    }
    // this condition is for when one is larger than other. ex. n = 4, (1 2 2 2), even = 3, odd = 1, so (3-1) = 2, (2/2) = 1. so we need to change 1 value to be able to divide these even-odd numbers evenly.
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
