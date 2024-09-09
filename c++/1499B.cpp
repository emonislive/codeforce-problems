#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s)
{
    int c = 0, tmp;
    for (int i = 0; i < s.length(); i++) {
        if (i + 1 < s.length() && s.substr(i, 2) == "11") {
            tmp = i;
        }
        if (i + 1 < s.length() && s.substr(i, 2) == "00") {
            if (tmp < i) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" <<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    string s;
    
    cin >> t;
    while(t--) {
        cin >> s;
        solve(s);
    }
    return 0;
}
