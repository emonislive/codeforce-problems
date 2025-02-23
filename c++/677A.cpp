#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io();
    int size, fenceHeight, minPossibleWidth = 0;
    cin >> size >> fenceHeight;

    vector<int> personList(size);
    for (auto& personHeight : personList)
        cin >> personHeight;

    for (auto personHeight : personList) {
        if (personHeight <= fenceHeight)
            minPossibleWidth++;    // ? normal person width = 1 (given)
        else
            minPossibleWidth += 2; // ? bent person width = 2 (given)
    }

    cout << minPossibleWidth << endl;

    return 0;
}
