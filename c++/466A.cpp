#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    /*
     * n = total ride. ex: 10 rides
     * m = x ride cost b price, ex: 5 rides cost 3 rubles
     * a = cost per ride, ex: 1 ride cost 1 rubles
     * b = price of m rides. [NOTE: like combo pack price, 4 chocolate set is only 10 rubles, where 1 chocolate costs 15 rubles]
     */
    int n{}, m{}, a{}, b{};
    std::cin >> n >> m >> a >> b;
    if (m * a <= b)
        std::cout << n * a << endl;
    else {
        // * Buy as many full combo tickets as possible, (n / m) * b
        // * then for the remaining rides choose the cheaper option, 
        // * either buy single tickets or one extra combo ticket. (n % m) * a  or b
        std::cout << (n / m) * b + std::min((n % m) * a, b);
    }
}

int main() {
    fastIO();
    int tt{};
    solve();
    return 0;
}
