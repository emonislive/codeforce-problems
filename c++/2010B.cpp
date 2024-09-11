#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    int youngest_bro = max(a, b);
    if (youngest_bro == 3)
        cout << youngest_bro - min(a, b);
    else if (youngest_bro == 2)
        cout << youngest_bro + min(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
