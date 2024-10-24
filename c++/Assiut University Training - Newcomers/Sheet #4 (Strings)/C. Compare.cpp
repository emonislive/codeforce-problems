#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s1, string s2) {
    string minString = min(s1, s2);
    cout << minString << endl;
}

int main() {
    fastIO();
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
    return 0;
}
