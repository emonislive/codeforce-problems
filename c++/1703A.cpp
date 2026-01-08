#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    std::string s;
    std::cin >> s;

    for (auto& ch : s)
        ch = tolower(ch);

    if (s == "yes")
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
}

int main() {
    fastIO();
    int tc;
    std::cin >> tc;
    while (tc--)
        solve();

    return 0;
}
