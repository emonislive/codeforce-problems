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

    for (auto& in : arr)
        std::cin >> in;

    int best = arr[0], count{}, worst = arr[0];
    for (int i{}; i < size; i++) {
        if (arr[i] > best) {
            best = arr[i];
            count++;
        }
        else if (arr[i] < worst) {
            worst = arr[i];
            count++;
        }
    }
    std::cout << count << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
