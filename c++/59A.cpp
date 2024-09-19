#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(string s) {
    int c = 0, l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90)
            c++;
        else if (s[i] >= 97 && s[i] <= 122)
            l++;
    }
    if (c <= l)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    solve(s);
    return 0;
}
