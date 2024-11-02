#include <iostream>
using namespace std;
#define endl '\n'

void solve(int size, char ch)
{
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << ch << " ";
        else
            cout << ch << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testCase, size;
    char ch;

    cin >> testCase;
    while (testCase--)
    {
        cin >> size >> ch;
        solve(size, ch);
    }

    return 0;
}
