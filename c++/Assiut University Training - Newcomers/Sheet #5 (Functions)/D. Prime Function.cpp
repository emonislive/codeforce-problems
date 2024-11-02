#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

int primeOrNot(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i <= sqrt(num); i++) // Trial Division Algorithm
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testCase, num;
    cin >> testCase;
  
    while (testCase--)
    {
        cin >> num;
        if (primeOrNot(num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
