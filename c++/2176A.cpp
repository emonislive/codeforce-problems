#include <iostream>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size;
    std::cin >> size;
    
    std::vector<int> arr(size);
    std::vector<bool> removed(size, false);

    for (auto& in : arr)
        std::cin >> in;

    int count{};
    for (int i{}; i < size - 1; i++) {
        for (int j{ i + 1 }; j < size; j++) {
            if (arr[i] > arr[j] && removed[j] == false) {
                count++;
                removed[j] = true;
            }
        }
    }
    std::cout << count << endl;
}

int main() {
    fastIO();
    int tc;
    std::cin >> tc;

    while (tc--)
        solve();

    return 0;
}
