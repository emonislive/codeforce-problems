#include <iostream>
#include <limits.h>
#include <utility>
using namespace std;
#define endl '\n'

pair<int, int> minMax(int size)
{
    int number, min = INT_MAX, max = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> number;
        if (number > max)
            max = number;

        if (number < min)
            min = number;
    }
    return make_pair(min, max);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int size;
    cin >> size;

    pair<int, int> minAndMax = minMax(size);
    cout << minAndMax.first << " " << minAndMax.second << endl;

    return 0;
}
