#include <iostream>
#include <iomanip>
using namespace std;
#define endl '\n'

double average(int testCase)
{
    double input, sum = 0, avg;
    int n = testCase;
    while (testCase--)
    {
        cin >> input;
        sum += input;
    }
    avg = sum / n;
    return avg;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    cout << fixed << setprecision(7) << average(testCase) << endl;
    
    return 0;
}
