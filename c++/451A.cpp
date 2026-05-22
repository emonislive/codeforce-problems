
#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{}, m{}, c{};
    std::cin >> n >> m;

    while (n != 0 && m != 0) {
        n--;
        m--;
        if (c == 0)
            c = 1; // akshat
        else
            c = 0; // Malvika
    }
    if (c == 0)
        std::cout << "Malvika" << endl;
    else
        std::cout << "Akshat" << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
