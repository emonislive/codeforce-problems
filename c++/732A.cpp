#include <iostream>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int k{}, r{};
    std::cin >> k >> r;
    for (int i = 1; i <= 9; i++) {
        if ((k * i) % 10 == 0) {
            std:: cout << i << endl;
            break;
        }
        if ((k * i) % 10 == r) {
            std:: cout << i << endl;
            break;
        }
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
