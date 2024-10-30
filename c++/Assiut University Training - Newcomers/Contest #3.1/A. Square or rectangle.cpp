#include <iostream>
using namespace std;
#define endl '\n'

void solve(int height, int width)
{
    if (height == width)
        cout << "Square" << endl;
    else
        cout << "Rectangle" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testCase, height, width;
    cin >> testCase;

    while (testCase--)
    {
        cin >> height >> width;
        solve(height, width);
    }

    return 0;
}
