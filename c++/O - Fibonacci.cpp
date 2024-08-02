#include <iostream>
using namespace std;
#define endl '\n'                              // making output operations faster
#define int long long

void solve(int input)
{
    if (input == 1 || input == 0){             // fabonacci of 0 or 1 = 0;
        cout << 0 << endl;
        exit(0);                               // to stop the program
    }
    else if(input == 2){                       // fabonacci of 2 = 1;
        cout << 1 << endl;
        exit(0);
    }
    int firstNumber = 0, secondNumber = 1, thirdNumber;
    thirdNumber = firstNumber + secondNumber;  // initialize thirdNumber with the sum of first and second
    for (int i = 3; i <= input; i++){
        firstNumber = secondNumber;
        secondNumber = thirdNumber;            // f2 holds the answer, (previous value)
        thirdNumber = firstNumber + secondNumber;
    }
    cout << secondNumber << endl;
}
signed main()
{
    // disables synchronization between C++ and C standard streams and unties cin and cout to improve I/O performance
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int input;
    cin >> input;
    solve(input);

    return 0;
}
