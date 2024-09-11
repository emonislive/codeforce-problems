#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a)
{
    if (1900 <= a)
        cout << "Division 1" << endl;
    else if (1600 <= a && a <= 1899)
        cout << "Division 2" << endl;
    else if (1400 <= a && a <= 1599)
        cout << "Division 3" << endl;
    else if (a <= 1399)
        cout << "Division 4" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}
