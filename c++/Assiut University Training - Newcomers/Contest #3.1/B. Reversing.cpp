#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int size)
{
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        /*
         * every time if there is a zero found then all the numbers before that zero will be reversed
         * ex. 1 2 0 3 4 0 2  ->  2 1 [0] 3 4 0 2  ->  4 3 0 1 2 [0] 2
         *  before reversed   -> [1 2]             -> [2 1 0 3 4]
         */
        if (arr[i] == 0)
            reverse(arr.begin(), arr.begin() + i);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << " ";
        else
            cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin >> size;
    solve(size);

    return 0;
}
