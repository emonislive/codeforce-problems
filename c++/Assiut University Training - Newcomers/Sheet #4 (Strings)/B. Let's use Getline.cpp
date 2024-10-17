#include <iostream>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s) {
    string finalString;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '\\')
            break;
        else
            finalString.push_back(s[i]);
    }
    cout << finalString << endl;
}
int main() {
    optimize();
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}
