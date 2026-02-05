#include <iostream>
#define endl '\n'
#define fast_io() std::ios::sync_with_stdio(false); std::cin.tie(nullptr);

void solve() {
    int n{}, s{}, x{}, sum{}, a{};
    std::cin >> n >> s >> x;

    bool flag = false;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        sum += a;

        if (sum == s)
            flag = true;
    }
    if (!flag) {
        while (sum < s)
            sum += x;
    }

    if (sum == s)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
}


int main() {
    fast_io();
    int tt{};

    std::cin >> tt;
    while (tt--)
        solve();

    return 0;
}
