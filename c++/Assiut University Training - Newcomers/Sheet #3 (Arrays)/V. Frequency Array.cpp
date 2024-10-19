#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int arraySize, int range)
{
    // checkDuplicates size = range + 1 because the numbers are in the range from 1 to M.
    vector<int> array(arraySize), checkDuplicates(range + 1, 0);
    for (int i = 0; i < arraySize; i++)
        cin >> array[i];

    for (int i = 0; i < arraySize; i++)
        checkDuplicates[array[i]]++;

    for (int i = 1; i <= range; i++)
        cout << checkDuplicates[i] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int arraySize, range;

    cin >> arraySize >> range;
    solve(arraySize, range);
    
    return 0;
}
