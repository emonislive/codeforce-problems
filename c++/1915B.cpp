#include <iostream>
using namespace std;
#define endl '\n'

void solve()
{
    string letter;
    for (int i = 0; i < 3; i++)
    {
        cin >> letter;
        int a = 0, b = 0, c = 0;
        
        for (int i = 0; i < 3; i++)
        {
            if (letter[i] == 'A')
                a = 1;
            else if (letter[i] == 'B')
                b = 1;
            else if (letter[i] == 'C')
                c = 1;
        }

        if (a != 1 && b == 1 && c == 1)
            cout << "A" << endl;
        else if (a == 1 && b != 1 && c == 1)
            cout << "B" << endl;
        else if (a == 1 && b == 1 && c != 1)
            cout << "C" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
