#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int min = v[0], c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == min)
            c++;
    }
    if (c % 2 != 0)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
}

int main() {
    optimize();
    int n;
    cin >> n;
    solve(n);
    return 0;
}
