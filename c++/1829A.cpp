#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    vector<char> given{ 'c','o','d','e','f','o','r','c','e','s' };
    vector<char> name(given.size());

    int missMatch{};
    for (int i{}; auto& ch : name) {
        cin >> ch;
        if (ch != given[i]) missMatch++;
        i++;
    }
    cout << missMatch << endl;

}

int main() {
    fastIO();
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
