#include <iostream>
using namespace std;
#define endl '\n'

void solve(int row, int col)
{
    int arr[row][col], posRow = -1, posCol = -1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                posRow = i;
                posCol = j;
            }
        }
    }
    int distanceFromRow, distanceFromCol;
    if (posRow == 2 && posCol == 2)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        distanceFromRow = abs(posRow - 2);
        distanceFromCol = abs(posCol - 2);
        cout << distanceFromCol + distanceFromRow << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row = 5, col = 5;
    solve(row, col);

    return 0;
}
