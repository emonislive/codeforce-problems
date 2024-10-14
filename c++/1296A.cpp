#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int arraySize)
{
    vector<int> array(arraySize);
    int sum = 0, even = 0, odd = 0;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (sum % 2 != 0)
        cout << "YES" << endl;
    else
    {
        /*
            * CONDITION 1: EVEN + EVEN = EVEN
            * CONDITION 2: ODD + ODD = EVEN
            ! CONDITION 3: EVEN + ODD = ODD
            NOTE: SO WE CAN MAKE THE 3RD CONDITION REALITY IF WE HAVE ATLEAST ONE EVEN AND ODD NUMBER.
                  WE CAN REPLACE THE OTHER NUMBERS WITH THE EXISTED EVEN-ODD NUMBERS TO MAKE THE 3RD COMBINATION.
                  HERE WE DO NOT HAVE ANY LIMITATION ON HOW MANY TIMES WE CAN USE THE SAME EVEN/ODD NUMBER TO
                  MAKE THE 3RD COMBINATION. SO WE CAN MAKE IT POSSIBLE IF ONLY WE HAVE ATLEAST 1 EVEN AND 1 ODD
                  NUMBER OTHERWISE NOT POSSIBLE.
        */
        if (even != 0 && odd != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase, arraySize;
    cin >> testCase;
    while (testCase--)
    {
        cin >> arraySize;
        solve(arraySize);
    }

    return 0;
}
