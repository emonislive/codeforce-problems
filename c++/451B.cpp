#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define ll long long 

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll size{};
    std::cin >> size;
    std::vector<ll> sorted(size), unsorted(size);
    for (ll i{}; i < size; i++) {
        std::cin >> sorted[i];
        unsorted[i] = sorted[i];
    }
    sort(sorted.begin(), sorted.end());
    ll start{-1}, end{-1};
    for (ll i{}; i < size; i++) {
        if (sorted[i] != unsorted[i]) {
            if (start == -1)
                start = i;

            end = i + 1;
        }
    }
    if (start != -1)
        reverse(unsorted.begin() + start, unsorted.begin() + end);
    
    if (std::is_sorted(unsorted.begin(), unsorted.end())) {
        std::cout << "yes" << endl;
        if (start == -1) start = 0;
        if (end == - 1) end = 1;
        std::cout << start + 1 << " " << end << endl;
    } else {
        std::cout << "no" << endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
