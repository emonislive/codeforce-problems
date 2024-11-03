#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
void solve(ll number)
{
    ll previousNumber = number - 1;

    /*
        A number is a power of 2 if and only if it has exactly one bit set in its binary representation. For example:

        2^0 = 1 is 0001
        2^1 = 2 is 0010
        2^2 = 4 is 0100
        2^3 = 8 is 1000

        Notice that each of these numbers has exactly one bit set to 1
        When you subtract 1 from a number that is a power of 2, you flip all the bits to the right of the single 1 bit, including the 1 bit itself. For example:

        If num = 8 (which is 1000 in binary), then num - 1 = 7 (which is 0111 in binary).
        If num = 4 (which is 0100 in binary), then num - 1 = 3 (which is 0011 in binary).
        Now, if you perform a bitwise AND operation between num and num - 1, you will get 0 if and only if num has exactly one bit set (i.e., it is a power of 2). Here's why:

        8 & 7 (in binary: 1000 & 0111) results in 0000.
        4 & 3 (in binary: 0100 & 0011) results in 0000.
        In contrast, if num is not a power of 2, this operation will not result in 0 because num will have more than one bit set. For example:

        If num = 10 (which is 1010 in binary), then num - 1 = 9 (which is 1001 in binary).
        10 & 9 (in binary: 1010 & 1001) results in 1000, which is not 0.
    */

    if ((number & previousNumber) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll number;
    cin >> number;
    solve(number);

    return 0;
}
