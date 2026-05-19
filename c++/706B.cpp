#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{};
    std::cin >> size;
    std::vector<int> arr(size);
    for (auto &in : arr) 
        std::cin >> in;

    int size_2{};
    std::cin >> size_2;
    std::vector<int> arr_2(size_2);
    for (auto &in : arr_2)
        std::cin >> in;

    sort(arr.begin(), arr.end());
    for (int target : arr_2) {
        int count = std::upper_bound(arr.begin(), arr.end(), target) - arr.begin();
        std::cout << count << endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
