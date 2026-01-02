#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

/*
 * dc = dark chocolate
 * wc = white chocolate
 * df = dark first
 * wf = white first
*/
void solve() {
    int wf{}, df{}, need{}, layerPossible{};
    int wc1{}, wc2{}, dc1{}, dc2{};

    cin >> wc1 >> dc1;

    wc2 = wc1;
    dc2 = dc1;

    // * 0 1 2 3 4 5 [index]
    // ? w d w d w d [order]
    for (int i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            need = pow(2, i);
            if (wc1 >= need)
                wf++;
            else
                break;

            wc1 -= need;
        }
        else {
            need = pow(2, i);
            if (dc1 >= need)
                wf++;
            else
                break;

            dc1 -= need;
        }
    }

    // * 0 1 2 3 4 5 [index]
    // ? d w d w d w [order]
    for (int i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            need = pow(2, i);
            if (dc2 >= need)
                df++;
            else
                break;

            dc2 -= need;
        }
        else {
            need = pow(2, i);
            if (wc2 >= need)
                df++;
            else
                break;

            wc2 -= need;
        }
    }
    layerPossible = max(wf, df);
    cout << layerPossible << endl;
}

int main() {
    fastIO();
    int tc{};
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
