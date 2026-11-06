#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int loop{};
    std::cin >> loop;
    
    std::string str;
    std::unordered_map<std::string, int> team_goal;

    while(loop--) {
        std::cin >> str;
        team_goal[str]++;
    }
    // ? inserting input keys & values in vector<pair> for sorting
    std::vector<std::pair<std::string, int>> freq(team_goal.begin(), team_goal.end());

    // ! sorting by value in desc to asc order
    sort(freq.begin(), freq.end(), [](auto a, auto b) {
        return a.second > b.second;
    });
    
    std::cout << freq[0].first << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
