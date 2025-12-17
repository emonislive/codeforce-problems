#include <iostream>
using namespace std;
#define endl '\n'


void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int binaryConvert(int bacteria) {
    int extraBacteria = 0;
    while (bacteria != 0) {
        if (bacteria % 2 != 0)
            extraBacteria++;

        bacteria >>= 1; // ? right shift by 1 (divide by 2)
    }
    return extraBacteria;
}

void solve() {
    int bacteria, bacteriaNeeded;
    cin >> bacteria;

    bacteriaNeeded = binaryConvert(bacteria);
    cout << bacteriaNeeded << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
