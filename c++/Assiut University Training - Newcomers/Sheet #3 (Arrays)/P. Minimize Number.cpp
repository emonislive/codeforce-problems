#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 != 0) {
            cout << 0 << endl;
            return;
        }
    }
    int c = 0, flag = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0)
                v[i] /= 2;
            else {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
        else
            c++;
    }
    cout << c << endl;
}

int main() {
    optimize();
    int n;
    cin >> n;
    solve(n);
    return 0;
}
