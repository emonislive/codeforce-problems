#include <iostream>
#include <algorithm>
#include <vector>

#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll window_size{}, arr_size{};
    std::cin >> window_size >> arr_size;
    
    std::vector<int> arr(arr_size);

    for (auto &in : arr) 
        std::cin >> in;

    sort(arr.begin(), arr.end());
    int answer = INT_MAX;

    for (int i{}; i + window_size <= arr_size; i++) {
        ll min_value = *min_element(arr.begin() + i, arr.begin() + i + window_size);
        ll max_value = *max_element(arr.begin() + i, arr.begin() + i + window_size);

        if (max_value - min_value < answer)
            answer = max_value - min_value;
    }
    std::cout << answer << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
