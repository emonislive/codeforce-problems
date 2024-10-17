#include <iostream>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s1, string s2) {
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 << " " << s2 << endl;
}
int main() {
    optimize();
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
    return 0;
}
