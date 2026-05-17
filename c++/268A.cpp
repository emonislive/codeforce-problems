#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{}, count{};
    std::cin >> n;
    int arr[n][2];

    for (int i{}; i < n; i++) {
        for (int j{}; j < 2; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int home_team{}; home_team < n; home_team++) {
        for (int away_team{}; away_team < n; away_team++)  {
            if (arr[home_team][0] == arr[away_team][1]) 
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
