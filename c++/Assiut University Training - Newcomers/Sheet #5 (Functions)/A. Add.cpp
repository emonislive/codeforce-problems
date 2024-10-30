#include <iostream>
using namespace std;
#define endl '\n'

int summation(int a, int b)
{
    return a + b;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int a, b;
  
    cin >> a >> b;
    cout << summation(a, b) << endl;
  
    return 0;
}
