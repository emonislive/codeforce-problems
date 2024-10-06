#include <iostream>
using namespace std;
#define endl '\n'

/*
     0   1   2   3   4  5   6   7   8   9  (j)  (string positions)
(i) ______________________________________
 0  |1   1   1   1   1  1   1   1   1   1|
    |   ______________________________   |
 1  |1  |2   2   2   2  2   2   2   2|  1|
    |   |   ______________________   |   |
 2  |1  |2  |3   3   3  3   3   3|  2|  1|
    |   |   |   ______________   |   |   |
 3  |1  |2  |3  |4   4  4   4|  3|  2|  1|
    |   |   |   |   ______   |   |   |   |
 4  |1  |2  |3  |4  |5  5|  4|  3|  2|  1|
 5  |1  |2  |3  |4  |5  5|  4|  3|  2|  1|
    |   |   |   |   ______   |   |   |   |
 6  |1  |2  |3  |4   4  4   4|  3|  2|  1|
    |   |   |   ______________   |   |   |
 7  |1  |2  |3   3   3  3   3   3|  2|  1|
    |   |   ______________________   |   |
 8  |1  |2   2   2   2  2   2   2   2|  1|
    |   ______________________________   |
 9  |1   1   1   1   1  1   1   1   1   1|
    ______________________________________
*/

void solve()
{
    string s;
    int c1, c2, c3, c4, c5, ans;
    c1 = c2 = c3 = c4 = c5 = ans = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'X')
            {
             /* Check if the 'X' is in the outermost region (border)
                This includes any 'X' in the first row (i == 0), last row (i == 9),
                first column (j == 0), or last column (j == 9) */
                if (((i == 0 || i == 9) && j >= 0 && j <= 9) || ((i >= 0 && i <= 9) && j == 0 || j == 9))
                    c1++;
             /* Check if the 'X' is in the second outermost region
                This includes any 'X' in the second row (i == 1), second-to-last row (i == 8),
                second column (j == 1), or second-to-last column (j == 8) */
                else if (((i == 1 || i == 8) && j >= 1 && j <= 8) || ((i >= 1 && i <= 8) && j == 1 || j == 8))
                    c2++;
             /* Check if the 'X' is in the third outermost region
                This includes any 'X' in the third row (i == 2), third-to-last row (i == 7),
                third column (j == 2), or third-to-last column (j == 7)  */
                else if (((i == 2 || i == 7) && j >= 2 && j <= 7) || ((i >= 2 && i <= 7) && j == 2 || j == 7))
                    c3++;
             /* Check if the 'X' is in the fourth outermost region
                This includes any 'X' in the fourth row (i == 3), fourth-to-last row (i == 6),
                fourth column (j == 3), or fourth-to-last column (j == 6)  */
                else if (((i == 3 || i == 6) && j >= 3 && j <= 6) || ((i >= 3 && i <= 6) && j == 3 || j == 6))
                    c4++;
             /* Check if the 'X' is in the innermost region
                This includes any 'X' in the fifth row (i == 4), sixth row (i == 5),
                fifth column (j == 4), or sixth column (j == 5)  */
                else if (((i == 4 || i == 5) && j >= 4 && j <= 5) || ((i >= 4 && i <= 5) && j == 4 || j == 5))
                    c5++;
            }
        }
    }
    // Debugging output (can be uncommented for debugging)
    // cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5;
    
    ans = (c1 * 1) + (c2 * 2) + (c3 * 3) + (c4 * 4) + (c5 * 5);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
