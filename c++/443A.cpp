#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(string s) {
    for (int i = 0; i < s.length(); ) {
        if (s[i] == ' ' || s[i] == ',' || s[i] == '{' || s[i] == '}') {
            s.erase(s.begin() + i);
        }
        else {
            i++;
        }
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s.length() << endl;
}

int main()
{
    optimization();
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}
