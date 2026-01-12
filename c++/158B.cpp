#include <iostream>
#include <cmath>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    // * tm = team members

    int team{}, member{}, tm1{}, tm2{}, tm3{}, tm4{}, taxi{};
    std::cin >> team;
    while (team--) {
        std::cin >> member;
        if (member == 1) tm1++;
        else if (member == 2) tm2++;
        else if (member == 3) tm3++;
        else tm4++;
    }

    // ? group 4
    taxi += tm4;

    // ? group 3
    taxi += tm3;

    tm1 -= tm3;
    if (tm1 < 0) tm1 = 0;

    // ? group 2
    if (tm2 % 2 == 0) taxi += (tm2 / 2);
    else {
        taxi += (tm2 / 2) + 1;
        tm1 -= 2;

        if (tm1 < 0) tm1 = 0;
    }
    // ? group 1
    taxi += ceil(tm1 / 4.0);

    std::cout << taxi << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
