#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size;
    cin >> size;

    int event, police = 0, crime = 0;
    for (int i = 0; i < size; i++) {
        cin >> event;

        if (event >= 1)
            police += event;
        else {
            if (police < 1)
                ++crime;
            else
                --police;
        }
    }
    cout << crime << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
