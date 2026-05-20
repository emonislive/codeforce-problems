#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{}, a{}, b{}, c{}, ans{};
    std::cin >> n >> a >> b >> c;

    for (int i{}; i <= n; i++) {
        for (int j{}; j <= n; j++) {
            int k = n - ((a * i) + (b * j));
            if (k >= 0 && k % c == 0) {
                k /= c;
                ans = std::max(ans, i + j + k);
            }
        }    
    }
    std::cout << ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
