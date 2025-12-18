#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size, heightDifferenceLimit;
    cin >> size >> heightDifferenceLimit;

    vector <int> soldiers(size);
    for (int& entry : soldiers) cin >> entry;

    int difference{ 0 }, teamFormationPossible{ 0 };

    for (int i{ 0 }; i < size; i++) {
        for (int j{ 0 }; j < size; j++) {
            if (i == j) continue;
            difference = abs(soldiers[i] - soldiers[j]);
            if (difference <= heightDifferenceLimit) {
                teamFormationPossible++;
                // cout << "count: " << soldiers[i] << " " << soldiers[j] << endl; // ! For Debugging
            }
        }
    }
    cout << teamFormationPossible << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
