#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int a, b, c;
    int operation_1, operation_2, operation_3, operation_4, operation_5, operation_6;
    int maxValue;

    cin >> a >> b >> c;

    operation_1 = a * b * c;
    operation_2 = (a * b) + c;
    operation_3 = a + (b * c);

    operation_4 = a + b + c;
    operation_5 = (a + b) * c;
    operation_6 = a * (b + c);

    maxValue = max(operation_1, max(operation_2, max(operation_3, max(operation_4, max(operation_5, operation_6)))));

    cout << maxValue << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
