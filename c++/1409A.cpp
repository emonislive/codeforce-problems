#include <iostream>
#define endl '\n'


void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int number_1{}, number_2{};
    int answer{}, remainder{};
    int difference{};

    std::cin >> number_1 >> number_2;

    difference = abs(number_1 - number_2);
    answer = difference / 10;
    remainder = difference % 10;

    if (remainder != 0) 
        answer++;
    
    std::cout << answer << endl;
}

int main() {
    fastIO();
    int tt{};
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
