#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    // ! "Summand" = individual numbers being added together in an addition problem, resulting in a total sum. ex: 1 + 2 = 3, where 1 & 2 are the summand
    vector<int> stages = {1, 10, 100, 1000, 10000}, summand;
    int number, tempNumber, size, divisor, digit;
    string characters;

    cin >> number;
    characters = to_string(number);
    size = characters.length();
    tempNumber = number;

    for (int i = size - 1; i >= 0; i--)
    {
        divisor = stages[i];
        digit = tempNumber / divisor;

        if (digit > 0)
        {
            summand.push_back(digit * divisor);
            tempNumber %= divisor;
        }
    }

    cout << summand.size() << endl;
    for (int i = 0; i < summand.size(); i++)
        cout << summand[i] << " ";

    cout << endl;
}

int main()
{
    fastIO();
    int tc;

    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
