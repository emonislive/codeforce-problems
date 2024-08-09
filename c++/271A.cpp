#include <iostream>
using namespace std;
#define endl '\n'

void solve(int year)
{
    int tmp, tmp2;
    int firstNum, secondNum, thirdNum, forthNum;
    if (year >= 1987 && year <= 2012)
    {
        cout << 2013 << endl;
    }
    else if (year < 1987 || year >= 2013)
    {
        for (int i = year + 1; ; i++)
        {
                              // ex. year = 1987
            tmp = i % 10;     // 198(7) - 7
            forthNum = tmp;   // insert value to forthNum --> (7)

            tmp2 = i / 10;    // 198
            tmp = tmp2 % 10;  // 19(8) - 8
            thirdNum = tmp;   // insert value to thirdNum --> (8)

            tmp2 = tmp2 / 10; // 19
            tmp = tmp2 % 10;  // 1(9) - 9
            secondNum = tmp;  // insert value to secondNum --> (9)

            tmp2 = tmp2 / 10; // 1
            firstNum = tmp2;  // insert value to firstNum --> (1)

            if ((firstNum != secondNum) && (firstNum != thirdNum) && (firstNum != forthNum) && (secondNum != thirdNum) && (secondNum != forthNum) && (thirdNum != forthNum))
            {
                cout << i << endl;
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int year;
    cin >> year;

    solve(year);
    return 0;
}
