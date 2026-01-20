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
    std::vector<std::pair<int, int>> arr(size); // ? {value, color}

    int index{};
    for (auto& it : arr) {
        std::cin >> it.first;

        if (index % 2 == 0)
            it.second = 0; // ? 0 = RED COLOR
        else
            it.second = 1; // ? 1 = BLUE COLOR

        index++;
    }
    sort(arr.begin(), arr.end());

    bool flag = false;
    int temp{};

    index = 0;
    for (auto& it : arr) {
        if (index == 0)
            temp = it.second;
        else {
            if (it.second == temp) {
                flag = true;
                break;
            }
            temp = it.second;
        }
        index++;
    }

    if (flag)
        std::cout << "nO" << endl;
    else
        std::cout << "yEs" << endl;
}

int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
