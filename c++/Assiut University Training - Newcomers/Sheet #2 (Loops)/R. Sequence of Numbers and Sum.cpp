#include <iostream>
using namespace std;
#define endl '\n'

void solve()
{
    int a, b, sum = 0;
    while (true) {
        cin >> a >> b;
        if (a <= 0 || b <= 0)
            exit(0);
        else {
            if (a > b)
                swap(a, b);
            for (int i = a; i <= b; i++) {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
