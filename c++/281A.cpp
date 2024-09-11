#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

void solve(string s) {
    cout << (char)toupper(s[0]) << s.substr(1, s.length());
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
    string s;
    cin >> s;
  
    solve(s);
    return 0;
}
