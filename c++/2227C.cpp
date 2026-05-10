#include <iostream>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{}, number{};
    std::cin >> size;
    std::vector<int> two, three, six, leftover;

    for (int i{}; i < size; i++) {
        std::cin >> number;
        if (number % 6 == 0)
            six.push_back(number);
        else if (number % 3 == 0)
            three.push_back(number);
        else if (number % 2 == 0)
            two.push_back(number);
        else 
            leftover.push_back(number);
    }

    for (int num : six) 
        std::cout << num << " ";
    for (int num : two) 
        std::cout << num << " ";
    for (int num : leftover) 
        std::cout << num << " ";
    for (int num : three) 
        std::cout << num << " ";

    std::cout << endl;
}

int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
