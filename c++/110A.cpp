#include <iostream>
using namespace std;
#define optimization() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

void solve(ll a) {
    string s = to_string(a);
    int c = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '4' || s[i] == '7')
            c++;
    }
    if (c == 4 || c == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    optimization();
    ll a;
    cin >> a;
    solve(a);
    return 0;
}
