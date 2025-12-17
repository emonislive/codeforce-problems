#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    string s, lyrics;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, 3) == "WUB") {
            i += 2;
            // ? prevents whitespace on the index[0]/beginning and more than one whitespace
            if (!lyrics.empty() && lyrics[lyrics.length() - 1] != ' ')
                lyrics.push_back(' ');
        }
        else
            lyrics.push_back(s[i]);
    }
    cout << lyrics << endl;
}

int main()
{
    fastIO();
    solve();

    return 0;
}
