#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int count{}, answer{}, digit{}, number = 1;
    std::cin >> count;
    while (count) {
        digit = number % 10;
        if (number % 3 != 0 && digit != 3) {
            count--;
            answer = number;
        }
        number++;
    }
    std::cout << number - 1 << endl;
}

int main() {
    fastIO();
    int tt{};
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
