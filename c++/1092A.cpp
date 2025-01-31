#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    string s;
    int size, diffChar, i = 0;
  
    cin >> size >> diffChar;
  
    while (s.size() < size) {
        if (i == diffChar)
            i = 0;

        s.push_back('a' + i);
        i++;
    }
    cout << s << endl;
}

int main() {
    fastIO();
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
