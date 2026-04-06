#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int answer{};
    std::cin >> answer;
    if (answer == 67 || answer == -67) 
        std::cout << answer << endl;
    else 
        std::cout << answer + 1 << endl;
}

int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--)
        solve();
  
    return 0;
}
