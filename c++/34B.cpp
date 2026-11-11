#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{}, m{};
    std::cin >> n >> m;
    
    std::vector<int> arr(n);
    for (auto &in : arr)
        std::cin >> in;

    int profit{};
    sort(arr.begin(), arr.end());
    for (int i{}; i < m; i++) {
        if (arr[i] < 0)
            profit -= arr[i];
    }
    std::cout << profit << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
