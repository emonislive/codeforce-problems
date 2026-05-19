#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int red{}, blue{}, diff_pairs{}, same_pairs{};
    std::cin >> red >> blue;

    while (true) {
        if (red + blue <= 1)
            break;

        if (red == 0 && blue >= 2) {
            same_pairs++;
            blue -= 2;
        }

        if (red >= 2 && blue == 0) {
            same_pairs++;
            red -= 2;
        }
    
        if (red != 0 && blue != 0) {
            diff_pairs++;
            red--;
            blue--; 
        }
    }
    std::cout << diff_pairs << " " << same_pairs << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
