#include <iostream>
using namespace std;
#define endl '\n'

/*
     |L|   0    0   |R|
      0   |L|  |R|   0
      0   |R|  |L|   0
     |R|   0    0   |L|
*/

void solve(int n)
{
    int arr[n][n], i, j;
    int sumFromRight = 0, sumFromLeft = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // * (n-i-1) = loop stars from beginning and counts starts from ending(reverse counting),
    for (i = 0; i < n; i++)
    {
        sumFromLeft += arr[i][i];
        sumFromRight += arr[i][n - i - 1];
    }
    int ans = abs(sumFromLeft - sumFromRight);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
