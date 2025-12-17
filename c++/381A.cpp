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

    vector <int> arr(size);
    for (int& card : arr)
        cin >> card;

    int player1 = 0, player2 = 0;
    int track = 0;
    for (int i = 0, j = size - 1; i <= j;) {
        if (track % 2 == 0) {
            if (arr[i] >= arr[j]) {
                player1 += arr[i];
                i++;
            }
            else {
                player1 += arr[j];
                j--;
            }
        }
        else {
            if (arr[i] >= arr[j]) {
                player2 += arr[i];
                i++;
            }
            else {
                player2 += arr[j];
                j--;
            }
        }
        track++;
    }
    cout << player1 << " " << player2 << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
