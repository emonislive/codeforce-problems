#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;
    
    if (a == b - 1 && b == c - 1)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
}

int main() {
    fastIO();
    int tt{};
    
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
