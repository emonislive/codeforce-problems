#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int size, quantity;
    int mihaiGot = 0, biancaGot = 0;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> quantity;
        if (quantity % 2 == 0) // checks for even number
            mihaiGot += quantity;
        else
            biancaGot += quantity;
    }

    if (mihaiGot > biancaGot)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}
