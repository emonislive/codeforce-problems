#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(vector<int> &v, int size, int resize)
{
    if (resize < 0)
    {
        for (int i = 0; i <= size; i++)
        {
            if (i == size)
                cout << v[i] << endl;
            else
                cout << v[i] << " ";
        }
        return;
    }
    v.push_back(0);

    return solve(v, size, resize - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    vector<int> v;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }

    v.erase(remove(v.begin(), v.end(), 0), v.end());
    int resize = size - v.size();

    if (resize == 0)
    {
        resize = size - 1;
        solve(v, size - 1, resize);
    }
    else
        solve(v, size - 1, resize);

    return 0;
}
