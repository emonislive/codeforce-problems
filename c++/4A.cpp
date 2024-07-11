    // Submit Date: 12/07/24
     
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
     
    if (a % 2 == 0)
    {
        if (a / 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;     
    return 0;
}
