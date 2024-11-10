#include <iostream>
using namespace std;
#define endl '\n'

void solve(char color[], int stones)
{
    int c = 0;
    for (int i = 0; i < stones - 1; i++)
    {
        if (color[i] == color[i + 1])
            c++;
    }
    cout << c << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int stones;
    cin >> stones;
    char color[stones];
    for (int i = 0; i < stones; i++)
    {
        cin >> color[i];
    }
    solve(color, stones);

    return 0;
}
