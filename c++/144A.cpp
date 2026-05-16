#include <iostream>
#include <vector>
#define endl '\n'
 
void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}
 
void solve() {
    int size{}; 
    std::cin >> size;
    std::vector<int> arr(size);
    
    int max_index{}, min_index{}, answer{};
    int max_value = INT_MIN, min_value = INT_MAX;
    for (int i{}; i < size; i++) {
        std::cin >> arr[i];
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
        if (arr[i] <= min_value) {
            min_value = arr[i];
            min_index = i;
        }
    }
    answer = max_index + (size - 1 - min_index);
    if (max_index > min_index)  
        answer--;
 
    std::cout << answer << endl;
}
 
int main() {
    fastIO();
    solve();
    return 0;
}
