#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int arraySize, int operations)
{
    vector<ll> arr(arraySize + 1), prefixSum(arraySize + 1);
    ll sum = 0, left, right, ans;
    ll a, b, c;
    for (int i = 1; i < arraySize + 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        prefixSum[i] = sum;
    }
    while (operations--)
    {
        cin >> left >> right;

        a = prefixSum[left - 1]; // previous element of 'left' position
        b = prefixSum[left];     // element on 'left' position
        c = prefixSum[right];    // element on 'right' position

        if (b > 1)
            ans = c - a;
        else
            ans = c - b;

        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int arraySize, operations;
    cin >> arraySize >> operations;
    solve(arraySize, operations);

    return 0;
}
