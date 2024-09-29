#include <iostream>
#include <algorithm>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(string s) {
    // sorting the string ex. badcfehg, sorted: abcdefgh
    sort(s.begin(), s.end());
    // removing the duplicate characters from the string to count the distinct characters in the string.
    s.erase(unique(s.begin(), s.end()), s.end());
    int len = s.length();
    if (len % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}

int main() {
    op();
    string s;
    cin >> s;
    solve(s);
    return 0;
}
