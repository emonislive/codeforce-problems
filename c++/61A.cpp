#include <iostream>
using namespace std;
#define endl '\n'
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(string& s1, string& s2) {
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[i])
            cout << 0;
        else
            cout << 1;
    }
    cout << endl;
}

int main() {
    fast_io();
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
    return 0;
}
