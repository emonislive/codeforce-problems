#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    string s, s2;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.push_back(v[i]);
    }
    
    for (int i = n - 1; i >= 0; i--) {
        s2.push_back(v[i]);
    }
    
    if (s == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
