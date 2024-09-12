#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    int a = 1, b = 2, c = 3;
    for (int i = 0; i < n; i++) {
        cout << a << " " << b << " " << c << " " << "PUM" << endl;
        a += 4; b += 4; c += 4;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    solve(n);
    return 0;
}
