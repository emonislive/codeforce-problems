#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(int a, int b) {
    int c = 0;
    while (true) {
        a *= 3;
        b *= 2;
        if (a > b) {
            c++;
            break;
        }
        else
            c++;
    }
    cout << c << endl;
}

int main() {
    op();
    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
