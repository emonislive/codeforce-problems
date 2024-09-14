#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int n, string s) {

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // unique sorts the unique values left side and sets the duplicates on the right side,
    // ex. 1 2 3 1 4 1 0, unique: 1 2 3 4 0 1 1 1
    // erase remove the duplicates -> 1 1 1
    s.erase(unique(s.begin(), s.end()), s.end());
    
    if (s == "meow")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;

    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        solve(n, s);
    }
    return 0;
}
