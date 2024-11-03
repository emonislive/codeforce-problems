#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll size, vector<ll> &array, vector<ll> &reversedEvenIndex)
{
    if (size < 0)
    {
        for (ll i = 0; i < reversedEvenIndex.size(); i++)
        {
            if (i == reversedEvenIndex.size() - 1)
                cout << reversedEvenIndex[i] << endl;
            else
                cout << reversedEvenIndex[i] << " ";
        }
        return;
    }
    if (size % 2 == 0)
        reversedEvenIndex.push_back(array[size]);

    solve(size - 1, array, reversedEvenIndex);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    ll size;
    cin >> size;

    vector<ll> array(size), reversedEvenIndex;

    for (ll i = 0; i < size; ++i)
    {
        cin >> array[i];
    }

    solve(size - 1, array, reversedEvenIndex); // Start from the last index

    return 0;
}
