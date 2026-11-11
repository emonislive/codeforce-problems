#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{7};
    
    std::vector<int> arr(size);
    for (auto & in : arr)
        std::cin >> in;
    

    sort(arr.begin(), arr.end());

    int sum{};
    for (int i{}; i < size; i++) {
        if (i == size - 1)
            sum += arr[i];
        else
            sum -= arr[i];
    }
    
    std::cout << sum << endl;
}

int main() {
    fastIO();
    int tt{};
    
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
