#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll size{}, end_point{};
    std::cin >> size >> end_point;
    
    std::vector<ll> arr(size);
    for (auto &in : arr) 
        std::cin >> in;
    
    sort(arr.begin(), arr.end());
    /* 
     * Finding the maximum edge distance:
     * 1. distance from start (0) to first lantern
     * 2. distance from last lantern to end of street
    
     * We multiply by 2 because later middle gaps are stored
     * as full distances instead of dividing by 2 immediately.
     * This keeps all comparisons in the same scale.
     */
    ll distance = std::max(arr[0], end_point - arr[size-1]) * 2; 

    for (int i = 1; i < size; i++) {
        // * Storing the full gap between consecutive lanterns.
        // * Actual required radius would be gap / 2,
        distance = std::max(distance, arr[i] - arr[i - 1]);
    }

    std::cout << std::fixed << std::setprecision(10) ;
    std::cout <<  (double)distance / 2 << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
