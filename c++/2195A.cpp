#include <iostream>
#define endl '\n'
#define fastIO() std::ios::sync_with_stdio(false); std::cin.tie(NULL);

void solve() {
    int totalNumber{}, number{};
    std::cin >> totalNumber;

    bool flag = false;
    while (totalNumber--) {
        std::cin >> number;
        if (number == 67) flag = true;
    }
    std::cout << (flag ? "YES" : "NO") << endl;

}

int main() {
    fastIO();
    int testCase;
    std::cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
