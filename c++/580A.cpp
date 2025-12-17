#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int currentStreak = 1, maxStreak = 1;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            currentStreak++;
            maxStreak = max(currentStreak, maxStreak);
            // cout << currentStreak << " "; // ! For debugging
        }
        else {
            currentStreak = 1;
            // cout << endl; // ! For debugging
        }
    }
    cout << maxStreak << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
