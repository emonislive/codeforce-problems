#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    std::string s;
    std::cin >> s;
    int y{};
    for (char ch : s)
        if (ch == 'Y') y++;

    if (y > 1)
        std::cout << "NO" << endl;
    else
        std::cout << "YES" << endl;
}

int main() {
    fastIO();
    int tc;
    std::cin >> tc;
    while (tc--)
        solve();

    return 0;
}
