#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fastIO();
    int size;
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    for (auto value : vec)
        cout << value << " ";

    return 0;
}
