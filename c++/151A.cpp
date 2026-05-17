#include <iostream>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int drink{}, toast{}, lime{}, salt{}, toast_per_person{};
    std::vector<int> arr(8);
    
    for (auto &in : arr)
        std::cin >> in;
    
    drink = arr[1] * arr[2];
    toast = drink / arr[6];
    lime = arr[3] * arr[4];
    salt = arr[5] / arr[7];
    toast_per_person = std::min(toast, std::min(lime, salt)) / arr[0];

    std::cout << toast_per_person << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
