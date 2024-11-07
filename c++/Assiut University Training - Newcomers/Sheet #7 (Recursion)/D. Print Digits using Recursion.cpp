#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s, int size, int i) {
    if (size == 0) {
        cout << s[i] << endl;
        return;
    }
    cout << s[i] << " ";
    return solve(s, size - 1, i + 1);
}

int main() {
    fastIO();
    string s;
    int testCase, size, i = 0;
    cin >> testCase;
    while (testCase--) {
        cin >> s;
        size = s.length();
        solve(s, size - 1, i);
    }
    return 0;
}
