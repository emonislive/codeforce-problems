#include <iostream>
#include <cmath>
#include <climits>
#define endl '\n'

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    std::string msg;
    int size{}, total_time{INT_MIN}, tmp{};
    double count{};

    std::cin >> size >> msg;
    for (int i{}; i < size; i++) {
        if (msg[i] == '#')
            count++;
        else {
            tmp = ceil(count / 2.0);
            total_time = std::max(tmp, total_time);
            count = 0;
        }
    }
    
    if (count > 0) {
        tmp = ceil(count / 2.0);
        total_time = std::max(tmp, total_time);
    }

    std::cout << total_time << endl;
}

int main() {
    fastIO();
    int tt;

    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
