#include <iostream>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int row, int col) {
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = col - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    optimize();
    int row, col;
    cin >> row >> col;
    solve(row, col);
    return 0;
}
