#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int size)
{
    vector<int> coin(size);
    int sum = 0, sum2 = 0, c = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> coin[i];
        sum += coin[i];
    }
    sum /= 2;
    sort(coin.begin(), coin.end(), greater<int>());
    for (int i = 0; i < size; i++)
    {
        sum2 += coin[i];
        c++;
        if (sum2 > sum)
            break;
    }
    cout << c << endl;
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
