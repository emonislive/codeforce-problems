#include <iostream>
#include <algorithm>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(string s) {
    int c = 0, l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            c++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
            l++;
    }
    if (((s[0] >= 97 && s[0] <= 122) && (c == s.length() - 1))) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
    }
    else if (c == s.length()) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
}

int main() {
    op();
    string s;
    cin >> s;
    solve(s);
    return 0;
}
