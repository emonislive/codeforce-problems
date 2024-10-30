#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int size)
{
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int positiveSwapNeed = 0, negativeSwapNeed = 0, minimumOperationNeed;

    // Scenario 1: Start with positive
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] < 0)
                positiveSwapNeed++; // Count swaps needed to make even index positive
        }
        else
        {
            if (arr[i] > 0)
                positiveSwapNeed++; // Count swaps needed to make odd index negative
        }
    }

    // Scenario 2: Start with negative
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > 0)
                negativeSwapNeed++; // Count swaps needed to make even index negative
        }
        else
        {
            if (arr[i] < 0)
                negativeSwapNeed++; // Count swaps needed to make odd index positive
        }
    }

    // Calculate the minimum swaps needed from both scenarios
    minimumOperationNeed = min(positiveSwapNeed, negativeSwapNeed);
    cout << minimumOperationNeed << endl;
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
