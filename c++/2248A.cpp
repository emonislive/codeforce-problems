#include <iostream>
#define endl '\n'

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    std::string str;
    std::cin >> str;

    bool first_zero = false, first_one = false;
    for (int i{}; i < str.size(); i++) {
        if (str[i] == '0' && !first_zero) {
            first_zero = true;
            continue;
        }

        if (str[i] == '1' && !first_one) {
            first_one = true;
            continue;
        }
        std::cout << str[i];
    }
    std::cout << endl;
}

int main() {
    fastIO();
    int tt;

    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
