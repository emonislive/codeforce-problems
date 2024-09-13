#include <iostream>
using namespace std;

void solve(int n)
{
    int two = n % 10;
    int one = n / 10;

    if (two == 0) {
        cout << "YES";
    }
    else {
        if (one % two == 0 || two % one == 0)
            cout << "YES";
        else
            cout << "NO";
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
