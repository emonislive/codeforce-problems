#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int loop, input , even, odd, pos, neg;
    even = odd = pos = neg = 0;
    cin >> loop;
    while (loop--){
        cin >> input;
        if (input % 2 == 0)
            even++;
        if (input % 2 != 0)
            odd++;
        if (input > 0)
            pos++;
        if (input < 0)
            neg++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
 
    return 0;
}
