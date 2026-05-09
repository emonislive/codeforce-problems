#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int len{}, left{}, right{};
    std::string brackets;
    std::cin >> len >> brackets;
    for (int i{}; i < brackets.length(); i++) {
        if (brackets[i] == '(') left++;
        if (brackets[i] == ')') right++;
    }
    if (left != right)
        std::cout << "NO" << endl;
    else
        std::cout << "YES" << endl;
}

int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
