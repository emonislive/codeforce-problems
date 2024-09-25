#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector <int> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater());
    cout << (v[0] - v[1]) + (v[1] - v[2]) << endl;
}

int main()
{
    optimization();
    solve();
    return 0;
}
