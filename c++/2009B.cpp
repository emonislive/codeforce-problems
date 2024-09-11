#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int n)
{
    string s;
    vector <int> v;
    for(int i; i < n; i++) {
        cin >> s;
        for (int i = 0; i < 4; i++) {
            if (s[i] == '#')
                v.push_back(i+1);
        }
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
