#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll n{}, m{};
    std::cin >> n >> m;
    std::vector<ll> arr(m);
    for (ll &in : arr) std::cin >> in;
   /* 
    * example:
    * n = 7
    * tasks = [3, 4, 5, 2]
    *
    * circular houses:
    * 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 1 ......
    *
    * movement process:
    * 1 -> 3 = +2
    * 3 -> 4 = +1
    * 4 -> 5 = +1
    * 5 -> 2 = +4
    *
    * total = 8
    */
// * start movement:
// * starting from house 1 to first task
ll count = arr[0] - 1;
  
for (ll i{}; i < m - 1; i++) {
    // ? forward movement:
    // ? example: 3 -> 5
    // ? distance = 5 - 3 = 2
    if (arr[i] < arr[i + 1]) count += arr[i + 1] - arr[i];

    // ? circular movement:
    // ? example: 5 -> 2 (n = 7)
    // ?
    // ? path:
    // ? 5 -> 6 -> 7 -> 1 -> 2
    // ?
    // ? distance:
    // ? (7 - 5) + 2 = 4
    if (arr[i] > arr[i + 1]) count += (n - arr[i]) + arr[i + 1];
}
    std::cout << count << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
