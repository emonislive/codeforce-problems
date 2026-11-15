#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    // ! 0 = Kalamakity (minimize the score)
    // ! 1 = Souvlakity (maximize the score)
    int size{};
    std::cin >> size;
  
    std::string binary(size, ' ');
    int count{}, min_index{INT_MAX}, max_index{INT_MIN};
  
    for (int i{}; i < size; i++) {
        std::cin >> binary[i];
        if (binary[i] == '1') {
            count++;
            if (min_index > i) min_index = i + 1;
            if (max_index <= i) max_index = i + 1;
        }
    }
    if (count == 1)
        std::cout << 0 << endl;
    else if (count == 2)
        std::cout << 1 << endl;
    else
        std::cout << max_index - min_index << endl;
}

int main() {
    fastIO();
    int tt{};    
    std::cin >> tt;
    while (tt--) 
        solve();
    
    return 0;
}
