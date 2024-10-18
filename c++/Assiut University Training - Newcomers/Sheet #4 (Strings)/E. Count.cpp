#include <iostream>
using namespace std;
#define endl '\n'

void solve(string number)
{
    int totalSum = 0;
    for (int i = 0; i < number.length(); i++)
    {
        int singleNumber = number[i] - '0';
        totalSum += singleNumber;
    }
    cout << totalSum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string number;
    cin >> number;
    solve(number);
    return 0;
}
