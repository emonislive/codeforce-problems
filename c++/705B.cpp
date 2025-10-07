#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fastIO();
    ll tests;
    cin >> tests;

    vector<ll> arr(tests);
    for (int i = 0; i < tests; i++)
        cin >> arr[i];

    ll sum = 0;
    for (int i = 0; i < tests; i++)
    {
        sum += arr[i];
        --sum;

        if (sum % 2 == 0)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
