#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll len{};
    std::cin >> len;   

    ll sum{}, temp;
    bool flag{true};

    std::vector<ll> arr(len + 1);
    for (ll i{1}; i <= len; i++) {
        std::cin >> arr[i];
        sum += arr[i];

        // ! (sum of the first n natural numbers) or (triangular number) formula = (n * (n + 1)) / 2, 
        // ? ex: n = 3, 1 + 2 + 3 = 6,
        // *    (n * (n + 1)) / 2
        // *  = (3 * (3 + 1)) / 2
        // *  = (3 * 4) / 2
        // *  = 12 / 2
        // *  = 6
        
        temp = (i * (i + 1)) / 2;
        if (sum < temp)
            flag = false;
    } 

    if (flag)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
}

int main() {
    fastIO();
    ll tt;

    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
