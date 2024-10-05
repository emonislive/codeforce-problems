#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (i % 2 == 0) {
                cout << "#";
            }
            else {
                if (i % 4 == 1) {
                    if (j != b - 1)
                        cout << ".";
                    else
                        cout << "#";
                }
                else if (i % 4 == 3) {
                    if (j == 0)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    op();
    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
