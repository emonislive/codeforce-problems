#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll n{}, in{};
    std::cin >> n;

    std::vector <ll> programming, math, physical_education;
    
    for (ll i{}; i < n; i++) {
        std::cin >> in;
        if (in == 1) programming.push_back(i + 1);
        if (in == 2) math.push_back(i + 1);
        if (in == 3) physical_education.push_back(i + 1);
    }
    
    ll team_possible = std::min({programming.size(), math.size(), physical_education.size()});

    std::cout << team_possible << endl;
    
    for (ll i{}; i < team_possible; i++) {
        std::cout << programming[i] << " ";
        std::cout << math[i] << " ";
        std::cout << physical_education[i] << endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
