#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    vector<int> banana(3);
    for (int i = 0; i < 3; i++)
        cin >> banana[i];
    sort(banana.begin(), banana.end());
    int count = 0;
    while (count < 5) {
        banana[0]++;
        sort(banana.begin(), banana.end());
        count++;
    }
    cout << banana[0] * banana[1] * banana[2] << endl;
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
