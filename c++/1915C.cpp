#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long
#define ull unsigned long long

void squareOrNot(ll sum)  // Binary Search Algorithm
{
    ll start = 0, end = sum;
    while (start <= end)
    {
        ll mid = start + (end - start) / 2;
        ull square = mid * mid;
        if (square == sum)
        {
            cout << "YES" << endl;
            return;
        }
        else if (square < sum)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "NO" << endl;
    return;
}

// void squareOrNot(ll sum) // Basic Approach
// {
//     double squareRoot = sqrt(sum);
//     ll floorVal = floor(squareRoot);
//     ll ceilVal = ceil(squareRoot);
//     if (floorVal == ceilVal)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }

void solve(ll size)
{
    vector<ll> num(size);
    ll sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    squareOrNot(sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll testCase, size;
    cin >> testCase;
    while (testCase--)
    {
        cin >> size;
        solve(size);
    }
    return 0;
}
