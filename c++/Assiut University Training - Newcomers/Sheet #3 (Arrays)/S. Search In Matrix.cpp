#include <iostream>
using namespace std;
#define endl '\n'

void solve(int row, int col)
{
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int search;
    cin >> search;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (search == arr[i][j])
            {
                cout << "will not take number" << endl;
                return;
            }
        }
    }
    cout << "will take number" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int row, col;
    cin >> row >> col;
    solve(row, col);
    
    return 0;
}
