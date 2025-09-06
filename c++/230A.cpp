#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int kiritoStrength, int size)
{
    vector<pair<int, int>> dragons(size);
    for (int i = 0; i < size; i++)
        cin >> dragons[i].first >> dragons[i].second; // first = dragon strength, second = bonus strength on win

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < size; i++)
    {
        if (dragons[i].first < kiritoStrength)
            kiritoStrength += dragons[i].second;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fastIO();
    int kiritoStrength, size;
    cin >> kiritoStrength >> size;
    solve(kiritoStrength, size);
    return 0;
}
