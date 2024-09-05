#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int n)
{
    int a, ans;
    vector <int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {                                                                       
        if (i > 0 && i < n - 1)                                             // vector position =  0 1 2 3 4 5 6 7  note: (the first and last element is excluded from this condition, added separately in the bellow conditions)
        {                                                                   // ex. vector      = {1 1 1 1 3 1 1 1}
            if (vec[i] != vec[i - 1] && vec[i] != vec[i + 1])               // if (vector[4] != vector[3] && vector[4] != vector[5])
            {                                                      
                ans = i;
                break;
            }
        }
        else
        {
            if (i == 0)                                                     // for the first element of the vector/array
            {                                                               // ex. vector = {1, 2, 2, 2}
                if (vec[i] != vec[i + 1] && vec[i + 1] == vec[i + 2])       // if (vector[0] != vector[1] && vector[1] == vector[2])
                {
                    ans = i;
                    break;
                }
            }
            if (i == n - 1)                                                 // for the last element of the vector/array
            {                                                               // ex. vector = {2, 2, 2, 1}      
                if (vec[n - 1] != vec[n - 2] && vec[n - 2] == vec[n - 3])   // if (vector[3] != vector[2] && vector[2] == vector[1])
                    ans = i;
            }
        }
    }
    cout << ans + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
