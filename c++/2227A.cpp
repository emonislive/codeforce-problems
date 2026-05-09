#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int a{}, b{};
    std::cin >> a >> b;
    if ((a % 2 != 0) && (b % 2 != 0))
        std::cout << "NO" << endl;
    else
        std::cout << "YES" << endl;
}

int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
