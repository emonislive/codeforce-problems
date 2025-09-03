#include <iostream>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int arraySize;
    cin >> arraySize;

    vector<int> numbers(arraySize);
    for (int i = 0; i < arraySize; i++)
        cin >> numbers[i];

    pair<int, int> evenNumber = {0, 0}; // first = total even value count, second = last updated index of the even value
    pair<int, int> oddNumber = {0, 0};  // first = total odd value count, second = last updated index of the odd value
    for (int i = 0; i < arraySize; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenNumber.first++;
            evenNumber.second = i;
        }
        else
        {
            oddNumber.first++;
            oddNumber.second = i;
        }
    }
    if (evenNumber.first == 1)
        cout << evenNumber.second + 1 << endl;
    else
        cout << oddNumber.second + 1 << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
