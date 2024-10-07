#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n, int m)
{
    if (n < m)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        /*
        if remaining values are odd then it can't be balanced
        balance only can be done on even value
        so we will not be able to fulfil the condition from the question of balancing the values to get the m value within the n attempts.
        the reduced values are already balanced. thats why we are checking the left values.
        */
        int diff = n - m;
        if (diff % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        solve(n, m);
    }

    return 0;
}
