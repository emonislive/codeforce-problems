#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size{};
    bool flag = false;
    std::cin >> size;
    vector<int> arr(size);

    for (auto& in : arr) std::cin >> in;
    for (int i{}; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = true;
            break;
        }
    }
    if (flag) std::cout << 1 << endl;
    else std::cout << size << endl;
}

int main() {
    fastIO();
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
