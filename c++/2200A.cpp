#include <iostream>
using namespace std;
#define endl '\n'
#define range 11

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size{};
    int arr[range];
    std::cin >> size;

    for (int i = 1; i < range; i++)
        arr[i] = 0;

    while (size--) {
        int round{};
        std::cin >> round;
        arr[round]++;
    }
    for (int i = range - 1; i >= 1; i--) {
        if (arr[i] != 0) {
            std::cout << arr[i] << endl;
            return;
        }
    }
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
