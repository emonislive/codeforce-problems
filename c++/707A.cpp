#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int row{}, column{};
    bool black_and_white = false, color = false;

    cin >> row >> column;

    char arr[row][column];
    unordered_map<char, int> freq;

    for (int i{}; i < row; i++)
        for (int j{}; j < column; j++)
            arr[i][j] = ' ';

    for (int i{}; i < row; i++) {
        for (int j{}; j < column; j++) {
            cin >> arr[i][j];

            if (arr[i][j] != ' ')
                freq[arr[i][j]]++;
        }
    }
    for (auto& ch : freq) {
        if (ch.first == 'B' || ch.first == 'W' || ch.first == 'G')
            black_and_white = true;
        else
            color = true;
    }
    if ((color && black_and_white) || color)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
