#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
/*
    the question asked to sum the fibonacci numbers to get the equal of the input number (a)
    but the weird part is that you can choose any fibonacci number to add and get the result (a)
    so 0 + 0 + a = a (always true)
*/

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll a;
    cin >> a;
    cout << 0 << " " << 0 << " " << a << endl;  

    return 0;
}
