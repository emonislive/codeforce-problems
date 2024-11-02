#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int arraySize)
{
    vector<int> array(arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
  
    int flag = 0;
    for (int i = 0; i < arraySize - 1; i++)
    {
        int difference = abs(array[i] - array[i + 1]);
        if (difference != 5 && difference != 7)
        {
            flag = 1;
            break;
        }
    }
  
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int testCase, arraySize;
    cin >> testCase;
    while (testCase--)
    {
        cin >> arraySize;
        solve(arraySize);
    }
    return 0;
}
